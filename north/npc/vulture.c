#include <lib.h>

inherit LIB_SENTIENT;


static void create() {
    sentient::create();
	SetKeyName("vulture");
	SetAdjectives(({"imposing","leering"}));
	SetId(({"vulture"}));
	SetShort("a large black bird");
	SetLong("A feathered beast the size of a man. Vultures feast on the dead.");
	SetRace("vulture");
    SetGender("male");
    SetClass("fighter");
	SetLevel(8);
    SetMelee(1);
	SetUnique(10);
	SetWander(2);
	SetMessage("come","$N hops toward boldly.");
	SetMessage("leave","$N has seen enough, hops to the $D.");
}

void init(){
    ::init();
}

