#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of courtyard3.c");
    SetLong("The grandstands of the noble, wealthy and brave are well appointed with seat backs, brass tacked upholstery, and a drain here and there for spills. Two might silver pennons hang above.");
    SetExits( ([
        "north" : "/domains/wangau/room/lordling2",
        "down" : "/domains/wangau/room/courtyard3",
        "south" : "/domains/wangau/room/lordling3.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
