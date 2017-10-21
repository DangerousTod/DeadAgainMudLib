#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("Royal Armory");
    SetExits( ([
        "south" : "/domains/wangau/room/battleroom",
        "west" : "/domains/wangau/room/chapel.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
