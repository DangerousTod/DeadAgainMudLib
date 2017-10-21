#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of terrace1top.c");
    SetLong("The rooftop patrol for archers, defenders, and men-at-arms. A door here leads to a turret.");
    SetExits( ([
        "west" : "/domains/wangau/room/terrace1top",
        "east" : "/domains/wangau/room/h2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
