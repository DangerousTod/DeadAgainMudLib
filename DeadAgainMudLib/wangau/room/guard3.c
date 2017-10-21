#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of guard4.c");
    SetLong("A large guardroom holding accomodations for seven armed guards. Weapons are standing along the walls. Beds and chairs line a wall.");
    SetItems( ([
      ]) );
    SetExits( ([
        "south" : "/domains/wangau/room/guard4",
        "north" : "/domains/wangau/room/guard2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
