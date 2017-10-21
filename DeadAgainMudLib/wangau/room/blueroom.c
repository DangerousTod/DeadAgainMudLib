#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of ivoryroom.c");
    SetLong("A private room for the most polite guests decorated in sequine beads of purple and blue. A fine oak door leads west and north.");
    SetExits( ([
        "west" : "/domains/wangau/room/ivoryroom",
        "north" : "/domains/wangau/room/goldroom.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
