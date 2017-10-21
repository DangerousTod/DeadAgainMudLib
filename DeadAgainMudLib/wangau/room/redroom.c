#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of penitent_hall.c");
    SetLong("This is the famed red room where often a party goer will engage in that which must not be recalled, for the sake of the court and the blood. Such caprice to be forgotten here. A fine oak door leads east, west, and south.");
    SetExits( ([
        "south" : "/domains/wangau/room/penitent_hall",
        "east" : "/domains/wangau/room/warroom",
        "west" : "/domains/wangau/room/commode.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
