#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Wall Street");
    SetLong("The worst of the worst hang about. The North Wall begins here rising up like jagged stairsteps.");
    SetItems( ([
      ]) );
    SetExits( ([
		"east" : "/domains/perdition/room/bridge_street3",
		"west" : "/domains/perdition/room/wall_street4.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
