#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of muster4.c");
    SetLong("An oopen courtyard within a wooden palisae. Castle guards, men-at-arms and powerful lords use this clay surface to train their horses. In times of war, they ready for battle here. A wide processional leads to an elegant stone tiled courtyard to the west. The southern castle wall rises up to a magnificent church where brilliant pennons twirl in the airy breeze.");
    SetExits( ([
        "north" : "/domains/wangau/room/muster6",
        "east" : "/domains/wangau/room/muster1",
        "northeast" : "/domains/wangau/room/muster4",
        "west" : "/domains/wangau/room/courtyard12.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
