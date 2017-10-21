#include <lib.h>

inherit  LIB_TRAINER;
void create(){
    trainer::create();
	SetKeyName("franz");
	SetId("franz");
	SetGender("male");
	SetRace("half-orc");
	SetShort("franz");
	SetLong("Franz is the trainer to these fearless gladiators. He will train you also. He will train you in the following skills: melee attack, blade attack, knife attack, projectile attack, and knife attack. You might be wondering about defense. You are in the wrong Gladiator School if you are worried about defense.");
	SetLevel(40);
	AddTrainingSkills( ({"melee attack","blade attack","knife attack","projectile attack","blunt attack"}) );
}
void init() {
    ::init();
}
