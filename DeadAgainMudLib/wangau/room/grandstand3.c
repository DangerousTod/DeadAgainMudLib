#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of grandstand2.c");
    SetLong("Long rows of benches for the crowds at celebrations and fighting events. To the north at the top of the grandstand is a boxing hall for the hardy and few, sadly without the means or blood to carry full arms.");
    SetExits( ([
        "north" : "/domains/wangau/room/boxing",
        "east" : "/domains/wangau/room/grandstand2",
        "west" : "/domains/wangau/room/grandstand4.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
