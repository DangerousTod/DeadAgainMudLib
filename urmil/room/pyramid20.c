#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A circular room below the pyramid. A well with footholds runs downward from here and another leads up");
    SetInventory(([
        "/domains/urmil/npc/pyramid_g" : 4,
      ]));
    SetExits( ([
        "down" : "/domains/urmil/room/pyramid21",
        "up" : "/domains/urmil/room/pyramid19",
      ]) );

}
void init(){
    ::init();
}
