#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Grand Refractory");
    SetLong("Grand Refractory");
    SetExits( ([
        "east" : "/domains/wangau/room/grandhall",
        "west" : "/domains/wangau/room/hall.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
