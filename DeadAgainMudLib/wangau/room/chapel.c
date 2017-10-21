#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("Mini Chapel");
    SetExits(([
        "east" : "/domains/wangau/room/armory",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
