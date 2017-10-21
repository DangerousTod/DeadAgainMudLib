#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("dwarf");
    SetId(({"dwarf"}));
    SetAdjectives(({"stocky","tough","ready"}));
    SetShort("dwarf soldier");
    SetLong("A dwarf soldier with a shield, spear, hammer and brothers to come to his aid with a shout.");
    SetInventory(([
        "/domains/north/weap/dhammer" : "wield hammer",
        "/domains/north/armor/dshield" : "wear shield",
      ]));
    SetLevel(10);
    SetMelee(10);
    SetRace("dwarf");
	SetGender("male");
}
void init(){
    ::init();
}
