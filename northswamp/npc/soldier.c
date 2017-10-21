#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
	SetKeyName("soldier");
	SetId(({"npc","soldier","city guard"}));
	SetAdjectives(({"non player"}));
	SetShort("Urmil city guard");
     SetLong("This odd fellow deems to keep you safe.");
     SetLevel(20);
    SetMelee(1);
     SetRace("android");
    SetGender("male");
     SetClass("fighter");
     SetInventory(([
	"/domains/northswamp/armor/leather_armor.c" : "wear armor",
	"/domains/northswamp/weap/sword_soldier.c" : "wield sword"
     ]));
}
void init(){
    ::init();
}
