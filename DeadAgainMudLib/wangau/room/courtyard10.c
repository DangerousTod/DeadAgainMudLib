#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of courtyard7.c");
    SetLong("The southern edge of the tourney rink is a great place to catch a glimpse of the action, or get smacked by a wild sword. The churchbells gleam high above you. A grand courtyard tiled with stones two armspans across spreads out before youto the west. A clay practice field for horsemen is to the east, beyond the tourney rink, behind the gate of a wooden palisade.");
    SetExits( ([
        "west" : "/domains/wangau/room/courtyard7",
        "east" : "/domains/wangau/room/courtyard11.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
