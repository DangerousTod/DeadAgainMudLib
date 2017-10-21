#include <lib.h>

inherit  LIB_TRAINER;
void create(){
    trainer::create();
	SetKeyName("Doram");
	SetId("Doram Axe-Beak");
	SetGender("male");
	SetRace("dwarf");
	SetShort("Doram Axe-Beak");
	SetLong("Doram is a trainer of blunt, knife, multi-hand and multi-weapon combat. Despite his name he does not have a big nose, he has an axe scar across his face.");
	SetLevel(40);
	AddTrainingSkills( ({"blunt defense","blunt attack","knife defense","knife attack","mutli-hand","mutli-weapon"}) );
}
void init() {
    ::init();
}
