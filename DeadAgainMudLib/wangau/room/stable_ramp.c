#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of stables2.c");
    SetLong("Hay and feed is stacked below racks of leaf-shaped steel armor for the warhorses. An anvil and shoeing block sit in one corner with a rack of hammers, files and such and the like.");
    SetExits( ([
        "north" : "/domains/wangau/room/stables2",
        "down" : "/domains/wangau/room/muster3",
        "south" : "/domains/wangau/room/stable1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
