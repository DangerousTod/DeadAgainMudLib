#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of turret1.c");
    SetLong("This is an access door for defenders, men-at-arms and patrolling archers to reach the terrace from the roof. At the bottom of the spiral staircase is a door to the terrace.");
    SetExits( ([
        "down" : "/domains/wangau/room/turret1",
        "east" : "/domains/wangau/room/h1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
