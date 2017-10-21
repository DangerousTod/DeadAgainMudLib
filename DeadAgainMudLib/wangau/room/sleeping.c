#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("A dozen cubby holes for sleeping were built into the walls, each stuffed with pillows. A wooden screen can be lowered and locked from the inside of each sleeping place.");
    SetExits( ([
        "north" : "/domains/wangau/room/greatroom",
        "east" : "/domains/wangau/room/kitchen.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
