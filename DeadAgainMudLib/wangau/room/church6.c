#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of church5.c");
    SetLong("Hundreds of cloaks and pairs of boots are stored here. Many hang in matching sets and have room for a third so that a fresh pair can be exchanged in poor weather. The grand foyer is to the north and to the east, through a tiny gap in the wall is an extra, tiny room.");
    SetExits( ([
        "north" : "/domains/wangau/room/church5",
        "east" : "/domains/wangau/room/church7.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
