#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("Great room");
    SetExits( ([
        "east" : "/domains/wangau/room/masterchamber",
        "west" : "/domains/wangau/room/mansion",
        "south" : "/domains/wangau/room/sleeping.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
