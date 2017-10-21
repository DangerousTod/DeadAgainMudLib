#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of masoleum.c");
    SetLong("The grand isle of Wangau begins at the Receiving Room of the Commons and terminates at the Grand Hall, where is the Throne. Battle hardened war swords hang on the walls. A heavy oak door, massively ornate leads to the south. To the north is a turret, no doubt packed with men-at-arms. And, at the west end of the grand isle is the throne room.");
    SetExits( ([
        "north" : "/domains/wangau/room/turret2",
        "south" : "/domains/wangau/room/masoleum",
        "east" : "/domains/wangau/room/common.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
