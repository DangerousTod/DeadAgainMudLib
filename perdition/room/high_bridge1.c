#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("High Bridge at River City");
    SetLong("High Bridge spans a muddy lowland. The North Wall can be seen. High Bridge is crowded with people passing in both directions.");
    SetItems( ([
      ]) );
    SetExits( ([
		"west" : "/domains/perdition/room/bridge_street3",
		"east" : "/domains/perdition/room/high_bridge2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
