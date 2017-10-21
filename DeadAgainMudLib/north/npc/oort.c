/*    /domains/Ylsrim/npc/fighter.c
 *    From the Dead Souls Mud Library
 *    An example class leader
 *    Created by Lassondra@Dead Souls
 *   Modded for DeadAgain by Vulture
 */

#include <lib.h>
inherit LIB_TRAINER;

int TeachFeat(object who, string verb, string feat);
int AllowPass(object who, object what){
    if(who->GetClass() == "fighter") return 1;
    return ::AllowPass(who, what);
}

int CheckVisitor(object who){
    eventForce("say Only fighters are allowed there!");
    return 1;
}

static void create() {
    trainer::create();
    SetKeyName("oort wyrlend");
    SetId("oort", "oort wyrlend");
    SetShort("Oort Wyrlend, Prime of the Gladiators");
    SetLong("Oort Wyrlend defends the Gladiator Hall. He is physical "
      "poetry in a brass studded harness. He is a renown "
      "trainer. Say to him <ask Oort to train in blade attack> "
      "for instance, or perhaps <ask oort to train in blunt "
      "defense> He is known to train anyone, though you may "
      "only enter the guild if you are a fighter.");
    SetInventory(([
        "/domains/north/armor/harness" : "wear",
        "/domains/north/armor/helmet" : "wear",
        "/domains/north/weap/trident" : "wield",
      ]));
    SetRace("orc");
    SetClass("fighter");
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
        AddChannel("fighter");
    }
    SetCommandResponses( ([
        "train" : (: eventTrain :),
        "teach" : (: eventTrain :),
        "default" : (: eventHelp :),
        "help" : (: eventHelp :),
      ]) );
    AddRequestResponses( ([
        "help" : (: eventHelp :),
      ]) );
}

void init(){
    ::init();
}
