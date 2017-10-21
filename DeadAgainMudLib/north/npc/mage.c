#include <lib.h>
#include <daemons.h>

inherit LIB_LEADER;

static void create() {
    leader::create();
    SetKeyName("mage");
    SetId(({"mage"}));
    SetAdjectives(({"young","dangerous","genius"}));
    SetShort("a young mage");
    SetLong("A leering wretch near the roadside.");
    SetInventory(([
        "/domains/north/armor/lvest" : "wear vest",
        "/domains/north/weap/hammer" : "wield hammer",
        "/domains/north/armor/pants" : "wear pants",
      ]));
    SetLevel(300);
    SetRace("human");
    SetGender("male");
    SetClass("mage");
    SetSpellBook( ([ "missile" : 100, "fireball" : 100, "buffer" : 100]) );
    SetCombatAction(50, ({"cast missile","cast buffer","cast fireball"}));
    SetLanguage("common", 100);
    SetDefaultLanguage("common");
}

void init(){
    ::init();
}
