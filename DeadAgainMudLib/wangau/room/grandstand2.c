#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of grandstand1.c");
    SetLong("Long rows of benches for the crowds at celebrations and fighting events. To the north at the top of the grandstand is beerhall which also serves as a pissour.");
    SetExits( ([
        "north" : "/domains/wangau/room/beer",
        "east" : "/domains/wangau/room/grandstand1",
        "west" : "/domains/wangau/room/grandstand3.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
