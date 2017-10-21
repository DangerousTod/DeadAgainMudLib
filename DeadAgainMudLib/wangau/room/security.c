#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("Security Station");
    SetExits(([
        "north" : "/domains/wangau/room/hall",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
