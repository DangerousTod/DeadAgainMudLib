#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("The lower patio");
    SetExits( ([
        "south" : "/domains/wangau/room/patio1",
        "east" : "/domains/wangau/room/dining.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
