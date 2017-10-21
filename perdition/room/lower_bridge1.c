#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Lower Bridge");
    SetLong("The wide bridge spans a sluggish river. People are fishing. Don't get snagged by a hook! It is carved from three huge pieces of marble.");
    SetItems( ([
      ]) );
    SetExits( ([
		"west" : "/domains/perdition/room/east_street1",
		"east" : "/domains/perdition/room/lower_bridge2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
