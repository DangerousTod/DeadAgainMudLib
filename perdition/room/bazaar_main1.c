#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of hedge_gate.c");
    SetLong("A urban shopping center.");
    SetItems( ([
        "template" : "That's what this is.",
      ]) );
    SetExits( ([
        "south" : "/domains/perdition/room/magic_shop",
        "north" : "/domains/perdition/room/postoffice",
        "up" : "/domains/perdition/room/hedge_gate",
        "west" : "/domains/perdition/room/hp.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
