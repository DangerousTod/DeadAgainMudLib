#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of carnival1.c");
    SetLong("The farthest isle of the carnival used mostly by runners fetching supplies and the squires of men fighting in the tourney arena.");
    SetExits( ([
        "south" : "/domains/wangau/room/carnival3",
        "east" : "/domains/wangau/room/carnival1",
        "west" : "/domains/wangau/room/carnival4.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
