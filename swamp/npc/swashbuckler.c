#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
     SetKeyName("swashbuckler");
     SetId( ({"npc","swashbuckler","mobile"}) );
     SetAdjectives(({"swashbuckler"}));
     SetShort("a swashbuckler");
     SetLong("A swashbuckler, pirate, salty old sea dog with ruddy cheeks and meaty fists.");
     SetLevel(25);
     SetMelee(1);
     SetRace("human");
     SetClass("fighter");
     SetGender("male");
     SetInventory(([
         "/domains/swamp/armor/sash.c" : "wear sash",
         "/domains/swamp/weap/cutlass.c" : "wield cutlass"
     ]));
     SetMaxHealthPoints(150);
}
void init(){
    ::init();
}
