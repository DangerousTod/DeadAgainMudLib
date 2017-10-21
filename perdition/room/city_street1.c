#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("A city street");
    SetLong("A long city street. To the north is a thick hedge. To the east and south are shops and occasionally crowds.");
    SetItems( ([
        "template" : "That's what this is.",
      ]) );
    SetExits( ([
        "east" : "/domains/perdition/room/east_street1",
        "northeast" : "/domains/perdition/room/city_street2",
        "south" : "/domains/perdition/room/shop.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
