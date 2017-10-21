#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("West Gate");
    SetLong("This is the East Gate. Soldiers are standing guard. Beyond this portcullis to the east is a wilderness. To the west is Lower Bridge.");
    SetItems( ([
      ]) );
    SetExits(([
		"west" : "/domains/perdition/room/lower_bridge1",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
