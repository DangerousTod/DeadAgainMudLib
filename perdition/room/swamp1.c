#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("You can slip and slide north to North City, south to High Bridge or venture east into the swamp.");
    SetItems( ([
      ]) );
    SetExits( ([
		"north" : "/domains/perdition/room/north_city_gate",
		"south" : "/domains/perdition/room/high_bridge4",
		"east" : "/domains/perdition/room/slop_room1.c",
      ]) );
    SetInventory(([
      ]));

}

void init(){
    ::init();
}
