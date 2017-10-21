#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("thug");
    SetId(({"thug"}));
    SetAdjectives(({"robber","thug","gangster"}));
    SetShort("a thug");
    SetLong("A bald headed, leather necked, knuckle dragging example of city bred street life.");
    SetInventory(([
        "/domains/perdition/weap/dagger" : "wield",
      ]));
    SetLevel(5);
    SetMelee(2);
    SetRace("human");
    SetGender("male");
}
void init(){
    ::init();
}
