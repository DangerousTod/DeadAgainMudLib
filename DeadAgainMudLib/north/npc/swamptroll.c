#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
	SetKeyName("troll");
     SetId(({"npc","mob","troll"}));
     SetAdjectives(({"swamp troll","troll"}));
     SetShort("a vicious troll");
     SetLong("A greenish humanoid with sunken eyes, long limb, and horrible stench.");
     SetLevel(1);
     SetMelee(1);
     SetRace("troll");
     SetGender("male");
      SetInventory(([
		"/domains/northswamp/weapon_club.c" : "wield club"
         ]));
      SetMaxHealthPoints(91);
}
void init(){
    ::init();
}
