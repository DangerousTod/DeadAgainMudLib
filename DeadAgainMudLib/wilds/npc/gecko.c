#include <lib.h>

inherit LIB_SENTIENT;


static void create() {
    sentient::create();
	SetKeyName("gecko");
	SetAdjectives(({"quick","slippery"}));
	SetId(({"gecko"}));
	SetShort("a tiny lizard");
	SetLong("A funny looking lizard with geodesic patters on its back.");
	SetRace("lizard");
    SetGender("male");
    SetClass("fighter");
	SetLevel(2);
    SetMelee(1);
	SetWander(10);
	SetMessage("come","$N darts from rock to rock.");
	SetMessage("leave","$N darts away to the $D.");
}

void init(){
    ::init();
}

