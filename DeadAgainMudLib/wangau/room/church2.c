#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of church1.c");
    SetLong("The priestly foyer. Robes hang here as well as several scrolls. Two large bookshelves are stacked with ancient volumes. The cathedral is to the west and a modest apartment is to the south.");
    SetExits( ([
        "west" : "/domains/wangau/room/church1",
        "south" : "/domains/wangau/room/church3.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
