#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h15.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms.");
    SetExits(([
        "south" : "/domains/wangau/room/h15",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
