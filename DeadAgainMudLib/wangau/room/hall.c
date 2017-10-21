#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("Royal Mansion");
    SetExits( ([
        "north" : "/domains/wangau/room/battleroom",
        "south" : "/domains/wangau/room/security",
        "east" : "/domains/wangau/room/refractory",
        "southwest" : "/domains/wangau/room/mansion.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
