#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
	sentient::create();
	SetKeyName("wyvern");
	SetId(({"wyvern"}));
	SetAdjectives(({"dragonette","young dragon","wyrm"}));
	SetShort("a wyvern");
	SetLong("A scaled, winged, bi-pedal serpent, quite like a dragon however the size of a man.");
	SetMelee(20);
	SetLevel(50);
	SetMaxHealthPoints(250);
	SetRace("dragon");
	SetGender("male");
	SetEncounter(20);
	SetAction(5, ({"The wyvern bristles.","The wyvern snarls."}));
}
void init(){
    ::init();
}
