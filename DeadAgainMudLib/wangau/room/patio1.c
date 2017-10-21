#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("The upper patio");
    SetExits( ([
        "east" : "/domains/wangau/room/mansion",
        "north" : "/domains/wangau/room/patio2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
