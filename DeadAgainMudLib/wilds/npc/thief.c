#include <lib.h>

inherit LIB_SENTIENT;


static void create() {
    sentient::create();
	SetKeyName("thief");
	SetAdjectives(({"sneaky","shifty"}));
	SetId( ({"thief"}) );
	SetShort("a wily human");
	SetLong("Someone out picking through corpses for weapons or gold.");
	SetRace("human");
    SetGender("male");
    SetClass("fighter");
    SetLevel(3);
    SetMelee(1);
	SetWander(10);
	SetMessage("come", "$N creeps forward.");
	SetMessage("leave","$N sneaks away.");
}

void init(){
    ::init();
}

