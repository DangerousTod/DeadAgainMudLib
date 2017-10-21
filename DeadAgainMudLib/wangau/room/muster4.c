#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of muster2.c");
    SetLong("An open courtyard within a wooden palisade. Castle guards, men-at-arms and powerful lords use this clay surface to train their horses. In times of war, they ready for battle here.");
    SetExits( ([
        "east" : "/domains/wangau/room/muster2",
        "northeast" : "/domains/wangau/room/muster3",
        "southeast" : "/domains/wangau/room/muster1",
        "west" : "/domains/wangau/room/muster6",
        "northwest" : "/domains/wangau/room/muster5",
        "southwest" : "/domains/wangau/room/muster7.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
