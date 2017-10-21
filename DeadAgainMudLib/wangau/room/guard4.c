#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Castle Wangau");
    SetLong("A large guardroom holding accomodations for seven armed guards. Weapons are standing along the walls. Beds and chairs line a wall.");
    SetItems( ([
      ]) );
    SetExits( ([
        "west" : "/domains/wangau/room/muster1",
        "up" : "/domains/wangau/room/tower1",
        "north" : "/domains/wangau/room/guard3.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
