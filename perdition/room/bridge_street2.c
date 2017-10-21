#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Above The Docks");
    SetLong("This is Bridge Street. follow it to the southwest to Lower Bridge. Bridge Street is marred with muddy paths to the docks. High Bridge is to the northeast. Men, possible pirates, linger along Bridge Street.");
    SetItems( ([
        "template" : "That's what this is.",
      ]) );
    SetExits( ([
		"southwest" : "/domains/perdition/room/bridge_street1",
		"northeast" : "/domains/perdition/room/bridge_street3.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
