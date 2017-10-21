#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of church1.c");
    SetLong("The grand foyer passes from an iron link curtain on the west to the cathedral on the east end of it. Candles and scenes of suffering are at either side. A door to the south connects a cloak room.");
    SetExits( ([
        "south" : "/domains/wangau/room/church6",
        "east" : "/domains/wangau/room/church1",
        "west" : "/domains/wangau/room/terrace1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
