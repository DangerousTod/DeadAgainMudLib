#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("A semi-private dining area for special guests in the mansion");
    SetExits( ([
        "west" : "/domains/wangau/room/patio2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
