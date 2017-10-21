#include <lib.h>
#include <daemons.h>

inherit LIB_LEADER;
int JoinGuild(object ob, string verb, string what);
int TeachSpell(object who, string verb, string spell);

string *spells;
mapping AvailableSpells, RestrictedSpells;


static void create() {
    leader::create();
	SetKeyName("Lou");
	SetId(({"Lou"}));
	SetAdjectives(({"Lou","the legend","legendary Lou"}));
	SetShort("Lou");
	SetLong("This is Lou, he walks fast, he talks fast, he thinks fast and he knows stuff, lots of stuff. You can ask to join this guild (the Thieves Guild) or you can ask him to teach you, combination, pinch, super stinger, finger, or bigger pinch. They work like spells for now, but they are all just specially for thieves!");
    SetLevel(300);
    SetUnique(0);
    SetRace("human");
    SetGender("male");
	SetClass("thief");
	SetSpellBook( ([ "combination" : 100, "super stinger" : 100, "bigger pinch" : 100 ]) );
	SetCombatAction(50, ({ "cast super stinger", "cast bigger pinch"}) );
    SetCommandResponses( ([
                "join": (: JoinGuild :),
                "teach" : (: TeachSpell :),

			"learn" : "You teach me? Naaah.",
                ]) );
    AvailableSpells = ( ([
		"combination" : 100,
		"pinch" : 200,
                ]) );
    RestrictedSpells = ( ([
		"super stinger" : 300,
		"finger" : 100,
		"bigger pinch" : 400,
                ]) );
    SetPolyglot(1);
    SetLanguage("common", 100);
    SetDefaultLanguage("common");
    SetCustomXP(10);
}

void init(){
    string key;
    int val;
    ::init();
    spells = ({});
    foreach(key,val in AvailableSpells){
        spells += ({ key });
    }
}

int JoinGuild(object ob, string verb, string what){
	if(ob->GetClass() == "thief") {
	eventForce("say Good job, now you aint a thief anymore...just kidding. you are already a thief!");
        return 1;
    }
    eventForce("say Hmm...want to join our guild, do you?");

//    if(!this_player()->GetQuest("Orc Slayer Quest")){
//        eventForce("say First you must prove yourself worthy. Help my brother Leo find the Orcslayer and I will happily welcome you into our family. Until then, you may not join the mages.");
//        return 1;
//    }
    if(ob->GetClass() == "explorer" || !ob->GetClass()){
        eventForce("say very well, "+ob->GetName()+".");
	eventForce("say Welcome welcome welcome! Now you are a thief! So make sure you get out there and move quick and steal steal steal! Just joking, we use stealth and trickery. Be smart or be quicker!");
	ob->ChangeClass("thief");
#if 0
        if(ob->GetLevel() == 1){
            eventForce("say you have been demoted to a Level 1 player. However, you still retain your experience and your questing history, so just ask Dirk to promote you again a few times.");
        }
#endif
        return 1;
    }
	eventForce("say Wooooah, you are already a member of some other guild! I aint about to remove you from the "+capitalize(ob->GetClass())+"'s Guild!");
    return 1;
}

int TeachSpell(object who, string verb, string spell){
    int cost, onhand;
    mapping myspells;
    if(!spell || spell == ""){
	eventForce("say I'm here to help, you know, please be specific.");
        return 1;
    }
    if(!SPELLS_D->GetSpell(spell)){
	eventForce("say No Can Do, pal.");
        return 1;
    }
    if(who->GetClass() != "mage" &&
            member_array(spell, keys(RestrictedSpells)) != -1){
	eventForce("I teach that to guild members only.");
        return 1;
    }
    if(member_array(spell,spells) == -1){
	eventForce("say I aint teaching that right now.");
        return 1;
    }
	myspells = who->GetSpellBook();
    if(myspells[spell]){
	eventForce("say you can already do that.");
        return 1;
    }
    cost = AvailableSpells[spell];
	onhand = who->GetCurrency("gold");
	if(who->GetClass() != "thief" && onhand < cost) {
        eventForce("say You lack enough silver coins to pay for that spell.");
	eventForce("say "+spell+" sets me back "+cost+" gold and you only "+
		"have "+onhand+".");
	eventForce("say Only bring me gold. That is the way things work around here. You can go find a bank and come back.");
        return 1;
    }
    tell_room(environment(this_object()),"Herkimer closes his eyes, mutters under his breath, and waves his hands.");
    if(!who->eventLearnSpell(spell)){
        eventForce("shake");
	eventForce("say Nah, you just aint ready for that just yet.");
        return 1;
    }
    eventForce("smile");
	eventForce("say Good work. You now knows a little something about "+spell+". Don't get picked up after doing that. Nope.");
	if(who->GetClass() != "thief") who->AddCurrency("gold",-cost);
    return 1;
}
