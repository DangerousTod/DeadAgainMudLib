#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of grandstand4.c");
    SetLong("This room is gracefully carved from powdery white stone. Above is a fine dome. To the east is a square door suitable to withstand a battering ram. To the west is stout oak panel door.");
    SetExits(([
        "east" : "/domains/wangau/room/grandstand4",
	   "west" : "/domains/wangau/room/common.c",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
