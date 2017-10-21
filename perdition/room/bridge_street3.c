#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("High Bridge gate on Bridge Street");
    SetLong("A congested street corner connecting High Bridge to the River City.");
    SetItems( ([
        "template" : "That's what this is.",
      ]) );
    SetInventory(([
        "/domains/perdition/npc/adventurer" : 3,
      ]));
    SetExits( ([
        "east" : "/domains/perdition/room/high_bridge1",
        "southwest" : "/domains/perdition/room/bridge_street2",
        "west" : "/domains/perdition/room/high_street3.c",
      ]) );

}

void init(){
    ::init();
}
