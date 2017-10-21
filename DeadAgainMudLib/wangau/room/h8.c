#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h7.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits( ([
        "south" : "/domains/wangau/room/h7",
        "north" : "/domains/wangau/room/h9.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
