#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of carnival4.c");
    SetLong("Long rows of benches for the crowds at celebrations and fighting events. To the north at the top of the grandstand is a comical theater.");
    SetExits( ([
        "north" : "/domains/wangau/room/theater1",
        "east" : "/domains/wangau/room/carnival4",
        "west" : "/domains/wangau/room/grandstand2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
