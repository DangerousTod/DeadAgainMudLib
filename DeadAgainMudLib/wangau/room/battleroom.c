#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("Battle Room");
    SetExits( ([
        "south" : "/domains/wangau/room/hall",
        "north" : "/domains/wangau/room/armory.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
