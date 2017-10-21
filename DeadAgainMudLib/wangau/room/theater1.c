#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of grandstand1.c");
    SetLong("Children flood to this theater for silly puppet sows and bawdy singers.");
    SetExits(([
        "south" : "/domains/wangau/room/grandstand1",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
