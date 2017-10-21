#include <lib.h>

inherit LIB_SENTIENT;


static void create() {
    sentient::create();
	SetKeyName("dragon");
	SetId(({"dragon"}));
	SetAdjectives(({"medium","red","dragon"}));
	SetShort("a medium dragon");
	SetLong("A medium-sized red dragon, only twenty feet length.");
	SetRace("dragon");
    SetGender("male");
    SetClass("fighter");
	SetEncounter(30);
	SetLevel(45);
	SetMelee(5);
	SetMaxHealthPoints(200);
	SetHealthPoints(175);
}

void init(){
    ::init();
}

