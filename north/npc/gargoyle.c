#include <lib.h>

inherit "/domains/north/etc/vampire_attk.c";

static void create() {
	::create();
	SetKeyName("gargoyle");
	SetAdjectives( ({"stone"}) );
    SetId(({"npc","mob","character","mobile"}));
	SetShort("a gargoyle");
	SetLong("A statue of a winged man that seems to come to life!");
	SetMelee(20);
	SetLevel(1);
	SetRace("gargoyle");
	SetEncounter( (: CheckFoul :) );
	SetHealthPoints(100);
	SetMaxHealthPoints(100);
    SetGender("male");
}
void init(){
    ::init();
}
