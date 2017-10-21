#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Northeast Tower of Castle Wangau");
    SetLong("Castle Wangau dominates an emerald green expanse. Blacksmith Road winds away to the east. Within the walls of the castle is a dusty clay muster separated from the rest of the castle by a palisade. Stairs descend to stables below.");
    SetExits(([
        "down" : "/domains/wangau/room/stables2",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
