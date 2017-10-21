/*    /domains/Ylsrim/npc/fighter.c
 *    From the Dead Souls Mud Library
 *    An example class leader
 *    Created by Lassondra@Dead Souls
 */

#include <lib.h>
inherit LIB_TRAINER;

static string save_file = save_file("/domains/Ylsrim/save/roshd");
static string quest_object = "/domains/town/armor/orc_helmet";
string *ok_join = ({});

int JoinGuild(object ob, string verb, string what);
int TeachFeat(object who, string verb, string feat);
int AllowPass(object who, object what){
	if(who->GetClass() == "thief") return 1;
    return ::AllowPass(who, what);
}

int CheckVisitor(object who){
	eventForce("say You can be on your way.");
    return 1;
}

static void create() {
    trainer::create();
    RestoreObject(save_file);
    if(!ok_join) ok_join = ({});
	SetKeyName("Bernie");
	SetId(({"bernie"}));
	SetAdjectives(({"bertelozzi","bottleneck","luigi","lugosse"}));
	SetShort("Bernie Bottleneck");
	SetLong("Bernie Bottleneck is an ace among the thieves. You can ask him to join the guild. He will train you in knife attack and knife defense, and also in melee attack and melee defense. There is more to the thieves guild than just stabing folks, much more. You will probably have to join to learn any of that stuff.");
	SetRace("human");
	SetClass("thief");
    SetLevel(45);
    SetGender("male");
    SetMorality(-400);
    SetProperty("no bump", 1);
    SetGuard("north", (: CheckVisitor :));
    //SetLanguage("Common", 100);
    //SetDefaultLanguage("Common");
    SetNoSpells(1);
    AddTrainingSkills(({"multi-weapon","multi-hand","blunt attack","blunt defense","blade attack","blade defense","knife attack","knife defense"}));
    // stick him on the fighter line
    if( clonep() ) {
		AddChannel("thief");
    }
    SetCommandResponses( ([
                "train" : (: eventTrain :),
                "teach" : (: eventTrain :),
                "default" : (: eventHelp :),
                "help" : (: eventHelp :),
                "join" : (: JoinGuild :),
                ]) );
    AddRequestResponses( ([
                "help" : (: eventHelp :),
                ]) );
}

int JoinGuild(object ob, string verb, string what){
    string keyname = ob->GetKeyName();
    string name = ob->GetName();
	if(ob->GetClass() == "thief") {
        eventForce("say You're already in, genius.");
        return 1;
    }
    eventForce("say Hmm...want to join our guild, do you?");

    if(ob->GetClass() == "explorer" || !ob->GetClass()){
        eventForce("say very well, "+ob->GetName()+".");
	ob->ChangeClass("thief");
	eventForce("say Welcome to the Thieves Guild, a true brotherhood. You may now enter the secret facility to the east. And never filch nothing from another thief. We are like that!");
    }
    eventForce("say I'm sorry, it looks to me like you have already chosen your
            specialty. As a member of the Guildmasters' Guild, I am forbidden from removing
            you from the "+capitalize(ob->GetClass())+"'s Guild.");
    return 1;
}

void init(){
    ::init();
}
