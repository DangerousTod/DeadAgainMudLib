#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of guard4.c");
    SetLong("An oopen courtyard within a wooden palisade. Castle guards, men-at-arms and powerful lords use this clay surface to train their horses. In times of war, they ready for battle here.");
    SetItems( ([
      ]) );
    SetExits( ([
        "north" : "/domains/wangau/room/muster2",
        "east" : "/domains/wangau/room/guard4",
        "northwest" : "/domains/wangau/room/muster4",
        "west" : "/domains/wangau/room/muster7.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
