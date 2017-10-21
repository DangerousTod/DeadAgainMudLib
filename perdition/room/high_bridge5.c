#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of high_bridge4.c");
    SetLong("A square stone cube mostly clear of the muck of Swamp End. Watchmen stand guard here.");
    SetItems( ([
      ]) );
    SetExits(([
		"west" : "/domains/perdition/room/high_bridge4",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
