#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("elf");
    SetId( ({"elf","npc","mobile"}) );
    SetAdjectives( ({"thin","quick","glowing"}) );
    SetShort("a woodland elf");
    SetLong("A woodland elf in a white robe.");
    SetInventory(([
        "/domains/north/weap/shortbow" : "wield",
        "/domains/north/armor/garb" : "wear",
        "/domains/north/obj/ring1" : "wear",
      ]));
    SetLevel(5);
    SetMelee(1);
    SetRace("elf");
    SetGender("male");
}
void init(){
    ::init();
}
