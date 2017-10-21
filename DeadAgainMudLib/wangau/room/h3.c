#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h2.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits( ([
        "north" : "/domains/wangau/room/h4",
        "west" : "/domains/wangau/room/h2",
        "east" : "/domains/wangau/room/h5.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
