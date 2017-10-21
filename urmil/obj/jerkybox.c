#include <lib.h>

inherit LIB_STORAGE;

void create() {
    ::create();
    SetKeyName("box");
    SetId( ({ "box" }) );
    SetAdjectives( ({ "wooden","wood" }) );
    SetShort("a wooden box");
    SetLong("It is a wooden box used to hold things.");
    SetMass(274);
    SetMaxCarry(500);
    SetInventory( ([
		"/domains/urmil/meals/jerky" : random(50)+10,
                ]) );
}

void init(){
    ::init();
}
