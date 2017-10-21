#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of lordling1.c");
    SetLong("The grandstands of the noble, wealthy and brave are well appointed with seat backs, brass tacked upholstery, and drains here and there for spills. Great pennons hang above, purple, green and blue here.");
    SetExits( ([
        "north" : "/domains/wangau/room/lordling1",
        "south" : "/domains/wangau/room/lordling4.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
