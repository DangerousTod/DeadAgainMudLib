#include <lib.h>

inherit LIB_SENTIENT;


static void create() {
    sentient::create();
	SetKeyName("spider");
	SetAdjectives(({"furry","creepy","many legged"}));
	SetId(({"spider"}));
	SetShort("a fat looking spider");
	SetLong("A small spider, only the size of a boot.");
	SetRace("insect");
    SetGender("male");
    SetClass("fighter");
	SetLevel(10);
    SetMelee(1);
	SetWander(10);
	SetMessage("come","$N darts from rock to rock.");
	SetMessage("leave","$N darts away to the $D.");
}

void init(){
    ::init();
}

