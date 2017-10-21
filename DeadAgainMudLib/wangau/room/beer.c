#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of grandstand2.c");
    SetLong("Here you have the freedom to drink as much beer as you like and to releive yourself as you do. Yuck.");
    SetExits(([
        "south" : "/domains/wangau/room/grandstand2",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
