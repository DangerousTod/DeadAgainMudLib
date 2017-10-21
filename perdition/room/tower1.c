#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("A Gap In The Hedge");
    SetLong("A trick of light leaves an open courtyard hidden as though behind a heavy wooden gate.");
    SetItems( ([
      ]) );
    SetExits( ([
		"east" : "/domains/perdition/room/city_street3",
		"west" : "/domains/perdition/room/tower2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
