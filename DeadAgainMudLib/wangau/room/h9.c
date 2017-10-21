#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h8.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits( ([
        "south" : "/domains/wangau/room/h8",
        "west" : "/domains/wangau/room/h10",
        "east" : "/domains/wangau/room/h13.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
