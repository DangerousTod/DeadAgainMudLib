#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("adventurer");
    SetId(({"adventurer"}));
    SetAdjectives(({"wanderer","adventurer"}));
    SetShort("an adventurer");
    SetLong("A warrior freshly returned from adventures in the wild.");
    SetInventory(([
        "/domains/perdition/armor/chainmail" : "wear",
        "/domains/perdition/armor/armored_boot_l" : "wear",
        "/domains/perdition/armor/sash" : "wear",
        "/domains/perdition/weap/leaf_spear" : "wield",
      ]));
    SetLevel(10);
    SetMelee(2);
    SetRace("elf");
    SetGender("male");
}
void init(){
    ::init();
}
