#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of gate.c");
    SetLong("An open courtyard within a wooden palisade. Castle guards, men-at-arms and powerful lords use this clay surface to train their horses. In times of war, they ready for battle here.");
    SetExits( ([
        "north" : "/domains/wangau/room/muster3",
        "east" : "/domains/wangau/room/gate",
        "west" : "/domains/wangau/room/muster4",
        "south" : "/domains/wangau/room/muster1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
