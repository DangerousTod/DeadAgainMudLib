#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of high_bridge2.c");
    SetLong("High Bridge at Swamp End is always disappointing. The swamp handles most security and sanitation tasks. people slip and slide through here, coming and going from North City. To the west is High Bridge.");
    SetItems( ([
      ]) );
    SetExits( ([
		"west" : "/domains/perdition/room/high_bridge2",
		"east" : "/domains/perdition/room/high_bridge4.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
