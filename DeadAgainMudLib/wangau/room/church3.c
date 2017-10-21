#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of church2.c");
    SetLong("A modest dwelling for the many priests and friars who keep the cathedral beautiful and pristine. To the north is the priestly foyer and to the east is a larder.");
    SetExits( ([
        "north" : "/domains/wangau/room/church2",
        "east" : "/domains/wangau/room/church4.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
