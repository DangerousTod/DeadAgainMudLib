#include <terrain_types.h>
#include <lib.h>
#include "/domains/swamp/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
	SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("North City Swamp");
    SetLong("Slimy swamp is all around.");
    SetExits( ([
		"notrth" : "/domains/swmap/room/slop_room1.c",
      ]) );
}
      AddTerrainType(T_SWAMP);
}
void init(){
    ::init();
}
