#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
	SetKeyName("soldier");
	SetId(({"captain"}));
	SetAdjectives(({"non player"}));
	SetShort("guard captain");
	SetLong("A ready looking guard captain. A fighter and a leader.");
	SetLevel(30);
    SetMelee(1);
	SetRace("human");
    SetGender("male");
     SetClass("fighter");
     SetInventory(([
	"/domains/northswamp/armor/leather_armor.c" : "wear armor",
	"/domains/northswamp/weap/sword_soldier.c" : "wield sword"
     ]));
	SetGuard("southwest","The Captain doesn't like the idea of you going that direction.");
}
void init(){
    ::init();
}
