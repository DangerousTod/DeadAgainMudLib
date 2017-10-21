#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of courtyard3.c");
    SetLong("A large tiled courtyard running round the tourney rink, under sthe grandstands and to the royal boxes. The boxes of the highest courtesians and ready knighthood stand at the far western end of the courtyard on great oak beams. The grandstands run the length of the courtyard along the norther edge. The tourney rink is to the east surrounded by white paint splattered pylons under chain. To the south is the open royal box below a belltower. A gate connects the muster and courtyard at the southeastern corner, wide for formal processions.");
    SetExits( ([
        "north" : "/domains/wangau/room/courtyard3",
        "south" : "/domains/wangau/room/courtyard9",
        "east" : "/domains/wangau/room/courtyard5",
        "southeast" : "/domains/wangau/room/courtyard8",
        "northeast" : "/domains/wangau/room/courtyard3.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
