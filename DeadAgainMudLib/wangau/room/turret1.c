#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of terrace2.c");
    SetLong("A spiral staircase of heavy planks each several inches thick runs from a square door on the second terrace up to a square door onto the rooftop.");
    SetExits( ([
        "east" : "/domains/wangau/room/terrace2",
        "up" : "/domains/wangau/room/terrace1top.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
