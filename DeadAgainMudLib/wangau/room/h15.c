#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h14.c");
    SetLong("This is the rooftop access for men-at-arms, defenders, and archers. An access is here to the second turret.");
    SetExits( ([
        "north" : "/domains/wangau/room/h16",
        "west" : "/domains/wangau/room/h14",
        "east" : "/domains/wangau/room/turret2top.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
