#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
	SetKeyName("soldier");
	SetId(({"colonel"}));
	SetAdjectives(({"non player"}));
	SetShort("Officer");
	SetLong("A guardsman with grey in his beard and stripes on his chest.");
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
}
void init(){
    ::init();
}
