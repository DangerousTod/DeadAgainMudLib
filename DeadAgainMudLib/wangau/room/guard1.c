#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of guard2.c");
    SetLong("A large guardroom holding accomodations for seven armed guards. Weapons are standing along the walls. Beds and chairs line a wall.");
    SetItems( ([
      ]) );
    SetExits( ([
        "south" : "/domains/wangau/room/guard2",
        "north" : "/domains/wangau/room/gate.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
