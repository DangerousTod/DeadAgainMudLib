#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of courtyard9.c");
    SetLong("The west wing of the royal box reserved for the ladies of greatest beauty. The grand royal box is to the east.");
    SetExits( ([
        "down" : "/domains/wangau/room/courtyard9",
        "east" : "/domains/wangau/room/royal1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
