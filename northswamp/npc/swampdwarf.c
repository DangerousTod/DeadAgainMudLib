#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
     SetKeyName("dwarf fighter");
     SetId(({"dwarf","npc","young dwarf"}));
    SetAdjectives(({"non player"}));
     SetShort("a dwarf");
     SetLong("A young dwarf, out of place in this swamp with barely a hair on his chin.");
     SetLevel(25);
    SetMelee(1);
     SetRace("dwarf");
    SetGender("male");
     SetMaxHealthPoints(200);
     SetInventory(([
		"/domains/northswamp/armor/chainmail.c" : "wear chainmail",
		"/domains/northswamp/weap/hammer.c" : "wield hammer",
		"/domains/northswamp/armor/shield.c" : "wear shield"
     ]));
}
void init(){
    ::init();
}
