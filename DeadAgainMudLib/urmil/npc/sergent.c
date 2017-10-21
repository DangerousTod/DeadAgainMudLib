#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
	SetKeyName("soldier");
	SetId(({"sergent"}));
	SetAdjectives(({"non player"}));
	SetShort("Officer");
	SetLong("A bull necked guardsman.");
	SetLevel(30);
    SetMelee(1);
	SetRace("human");
    SetGender("male");
     SetClass("fighter");
     SetInventory(([
	"/domains/northswamp/armor/leather_armor.c" : "wear armor",
	"/domains/northswamp/weap/sword_soldier.c" : "wield sword"
     ]));
	SetGuard("down","The Colonel stops you in your tracks.");
	SetGuard("down","The Sergent seems to think he needs to know where you are going.");
	SetGuard("up","The Sergent seems to think he needs to know where you are going.");
	SetGuard("north","The Sergent stops you.");
	SetGuard("south","The Sergent stops you.");
	SetGuard("east","The Sergent stops you.");
	SetGuard("west","The Sergent stops you.");
	SetGuard("northwest","The Sergent stops you.");
	SetGuard("southwest","The Sergent stops you.");
}
void init(){
    ::init();
}
