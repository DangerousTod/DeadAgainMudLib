#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h4.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits( ([
        "south" : "/domains/wangau/room/h4",
        "north" : "/domains/wangau/room/h8.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
