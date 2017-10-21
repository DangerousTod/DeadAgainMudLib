#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("Royal Kitchen");
    SetExits(([
        "west" : "/domains/wangau/room/sleeping",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
