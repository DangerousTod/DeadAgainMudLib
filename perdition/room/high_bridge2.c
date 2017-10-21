#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of high_bridge1.c");
    SetLong("High Bridge spans a muddy lowland. The North Wall can be seen. High Bridge is crowded with people passing in both directions.");
    SetItems( ([
      ]) );
    SetExits( ([
		"west" : "/domains/perdition/room/high_bridge1",

		"east" : "/domains/perdition/room/high_bridge3.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
