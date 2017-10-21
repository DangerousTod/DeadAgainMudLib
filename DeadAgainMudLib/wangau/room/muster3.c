#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of muster2.c");
    SetLong("An open courtyard within a wooden palisade. Castle guards, men-at-arms and powerful lords use this clay surface to train their horses. In times of war they ready for battle here. A broad ramp, suitable for horses leads up to a very wide door in the east wall.");
    SetExits( ([
        "south" : "/domains/wangau/room/muster2",
        "west" : "/domains/wangau/room/muster5",
        "southwest" : "/domains/wangau/room/muster4",
        "up" : "/domains/wangau/room/stable_ramp.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
