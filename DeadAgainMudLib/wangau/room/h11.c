#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h10.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits( ([
        "east" : "/domains/wangau/room/h10",
        "west" : "/domains/wangau/room/h12.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
