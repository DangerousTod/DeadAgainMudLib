#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of wall_street4.c");
    SetLong("The worst of the worst hang about. The North Wall begins here rising up like jagged stairsteps.");
    SetItems( ([
      ]) );
    SetExits( ([
		"east" : "/domains/perdition/room/wall_street4",
		"north" : "/domains/perdition/room/on_the_wall1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
