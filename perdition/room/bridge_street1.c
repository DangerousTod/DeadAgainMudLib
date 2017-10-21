#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of east_street1.c");
    SetLong("A city street with merchants and minstrels. To the east is a wide bridge over a sluggish river.");
    SetItems( ([
        "template" : "That's what this is.",
      ]) );
    SetInventory(([
        "/domains/perdition/npc/juggler" : 2,
      ]));
    SetExits( ([
        "southwest" : "/domains/perdition/room/east_street1",
        "northeast" : "/domains/perdition/room/bridge_street2.c",
      ]));

}

void init(){
    ::init();
}
