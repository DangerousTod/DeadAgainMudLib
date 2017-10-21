#include <lib.h>
#include <objects.h>

inherit  LIB_TRAINER;
void create(){
    trainer::create();
	SetKeyName("boris");
	SetId(({"boris"}));
	SetAdjectives(({"master","teacher","guard master"}));
    SetGender("male");
    SetRace("human");
	SetShort("Master Boris");
	SetLong("The master of the city guard will teach you melee attack and melee defense to aid you in unarmed combat.");
    SetClass("fighter");
    SetLevel(40);
    AddTrainingSkills( ({ "melee attack", "melee defense" }) );
    SetSkill("melee attack", 100);
    SetSkill("melee defense", 100);
    SetPolyglot(1);
    SetLanguage("Common", 100);
    SetDefaultLanguage("Common");
    SetUnique(1);
}

void init() {
    trainer::init();
}
