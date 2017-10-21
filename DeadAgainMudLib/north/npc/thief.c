#include <lib.h>

inherit LIB_NPC;

static void create() {
    npc::create();
    SetKeyName("thief");
	SetId(({"shifty thief"}));
	SetAdjectives(({"mean","hovering"}));
	SetShort("a thief");
	SetLong("A naerdowell in a mask playing nonchalant.");
    SetLevel(1);
    SetRace("human");
    SetClass("thief");
    SetGender("male");
//   I like the thief set to attack
//   perhaps my morality is much too low, however
//   the thieves attack each other
//   they will check thief first
//   until then, commented out
//    SetEncounter(100);
	SetMelee(10);
    SetInventory(([
		"/domains/north/armor/leather_armor.c" : "wear armor",
		"/domains/north/weap/weapon_club.c" : "wield club",
                ]) );
    SetHealthPoints(50);
}
void init(){
    ::init();
}
