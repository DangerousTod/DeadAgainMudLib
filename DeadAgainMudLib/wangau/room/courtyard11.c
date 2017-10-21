#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of courtyard10.c");
    SetLong("The southern edge of the tourney rink is a great place to catch a glimpse of the action, or get smacked by a wild sword.");
    SetExits( ([
        "west" : "/domains/wangau/room/courtyard10",
        "east" : "/domains/wangau/room/courtyard12.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
