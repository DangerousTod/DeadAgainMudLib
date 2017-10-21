#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("North City Gate");
    SetLong("North City Gate");
    SetItems( ([
      ]) );
    SetExits(([
		"south" : "/domains/perdition/room/swamp1",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
