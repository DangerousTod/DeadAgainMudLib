#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h9.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits( ([
        "east" : "/domains/wangau/room/h9",
        "west" : "/domains/wangau/room/h11.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
