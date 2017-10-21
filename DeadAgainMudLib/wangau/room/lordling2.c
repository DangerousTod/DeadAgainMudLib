#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of lordling1.c");
    SetLong("The grandstands of the noble, wealthy and brave are well appointed with seat backs, brass tacked upholstery, and a drain here and there for spills.");
    SetExits(([
        "south" : "/domains/wangau/room/lordling1",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
