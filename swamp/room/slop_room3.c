#include <terrain_types.h>
#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North City Swamp");
    SetLong("Slimy swamp is all around.");
	SetEnters(([
               ]));
      SetInventory(([
               ]));
	SetItems(([
		]));
	SetDoor();
	SetSkyDomain();
    SetExits( ([
		"northwest" : "/domains/swamp/room/slop_room4",
		"south" : "/domains/swamp/room/slop_room2"
      ]) );
}
      AddTerrainType(T_SWAMP);
}
void init(){
    ::init();
}
