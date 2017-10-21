#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of h15.c");
    SetLong("The second turret top offers access to the patrol routes of the archers, defenders, and men-at-arms. A spiral staircase leads down to the central throne room area, specifically the Grand Isle.");
    SetExits( ([
        "west" : "/domains/wangau/room/h15",
        "down" : "/domains/wangau/room/turret2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
