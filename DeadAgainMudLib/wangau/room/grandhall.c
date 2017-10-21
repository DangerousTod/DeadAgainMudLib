#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of grandisle.c");
    SetLong("The Throne Room of Wangau Castle is a gothic affair in crimson decorated with hand stitched shields of holly green silk thread. A skylight faces the throne, burnishing its gold hardware. Four audience chambers rise to the foot of the throne each separated by a few stair steps from the lesser. A golden mace the length of a man leans against the wall beside the throne. The grand isle is to the east and a door carved of wood as white as snow leads to the west.");
    SetExits( ([
        "east" : "/domains/wangau/room/grandisle",
        "west" : "/domains/wangau/room/refractory.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
