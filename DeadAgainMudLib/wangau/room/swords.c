#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of lances.c");
    SetLong("Swords line the walls. The heavy sharpened blades practically dangle from their holders right up to the rooftop some twenty feet above or so.");
    SetExits( ([
        "west" : "/domains/wangau/room/lances",
        "east" : "/domains/wangau/room/stables2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
