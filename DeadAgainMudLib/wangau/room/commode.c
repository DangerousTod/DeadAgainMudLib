#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of redroom.c");
    SetLong("There is little more to say of this room other than it is a very large public toilet which at times serves as a bath house. A fine oak door leads to the east.");
    SetExits(([
        "east" : "/domains/wangau/room/redroom",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
