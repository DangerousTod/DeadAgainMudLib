#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h3.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits( ([
        "south" : "/domains/wangau/room/h3",
        "north" : "/domains/wangau/room/h7.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
