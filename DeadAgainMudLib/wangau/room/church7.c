#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of church6.c");
    SetLong("The priory of the cathedral of Wangau is a tiny humble room with only a small pool of water, unfinished stone walls and knotty, wobbly board on the floor-just a foot or so from the pool.");
    SetExits(([
        "west" : "/domains/wangau/room/church6",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
