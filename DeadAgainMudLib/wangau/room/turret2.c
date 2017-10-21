#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Wangau Castle");
    SetLong("A spiral staircase leads up this turret to the rooftop. Clearly this rough stone tower is not meant for the eyes party goers. It is intended to keep guests and the royal family safe. The Grand Isle can be accessed by passing between heavy velvet curtains to the south.");
    SetExits( ([
        "south" : "/domains/wangau/room/grandisle",
        "up" : "/domains/wangau/room/turret2top.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
