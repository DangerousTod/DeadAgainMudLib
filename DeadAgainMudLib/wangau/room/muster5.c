#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of muster4.c");
    SetLong("An open courtyard within a wooden palisade. Castle guards, men-at-arms and powerful lords use this clay surface to train their horses. In times of war, they ready for battle here.");
    SetExits( ([
        "south" : "/domains/wangau/room/muster6",
        "east" : "/domains/wangau/room/muster3",
        "southeast" : "/domains/wangau/room/muster4",
        "north" : "/domains/wangau/room/hold.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
