#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h1.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits( ([
        "west" : "/domains/wangau/room/h1",
        "east" : "/domains/wangau/room/h3.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
