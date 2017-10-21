#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("High Bridge at Swamp End is always disappointing. The swamp handles most of the security and sanitation tasks, poorly. People slip and slide, coming and going between North City and High Bridge. To the east is a security checkpoint.");
    SetItems( ([
      ]) );
    SetExits( ([
		"east" : "/domains/perdition/room/high_bridge5",
		"west" : "/domains/perdition/room/high_bridge3",
		"north" : "/domains/perdition/room/swamp1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
