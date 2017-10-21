#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Southeast Tower of Castle Wangau");
    SetLong("Castle Wangau dominates an emerald green expanse. Blacksmith Road winds away to the east. Within the walls of the castle is a dusty clay muster separated from the rest of the castle by a palisade. Stairs descend to a series of guardrooms below.");
    SetItems( ([
      ]) );
    SetExits( ([
        "down" : "/domains/wangau/room/guard4.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
