#include <lib.h>

inherit LIB_NPC;


static void create() {
	npc::create();
	SetKeyName("snake");
	SetAdjectives( ({"snakey","slithering"}) );
	SetId( ({"snake"}) );
	SetShort("a serpent");
	SetLong("A rainbow hued snake of medium size underfoot.");
	SetRace("viper");
    SetGender("male");
    SetClass("fighter");
    SetLevel(3);
    SetMelee(1);
	SetMessage("come", "$N scuttles toward you.");
	SetMessage("leave","$N scurries $D.");
}

void init(){
    ::init();
}

