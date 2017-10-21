#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of city_street1.c");
    SetLong("A city street with merchants and minstrels. To the east is a wide bridge over a sluggish river.");
    SetItems( ([
      ]) );
    SetExits( ([
        "east" : "/domains/perdition/room/lower_bridge1",
        "northeast" : "/domains/perdition/room/bridge_street1",
        "west" : "/domains/perdition/room/city_street1",
        "north" : "/domains/perdition/room/bank.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
