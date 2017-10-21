#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
	SetClimate("temperate");
    SetAmbientLight(30);
	SetShort("Urmil Well");
	SetLong("The well outside Urmil, also known as Farmers' Well is a waypoint for caravaners setting out into the badlands on Urmil Road. Their pack animals and tents surround the well. The well is said to mystical properties.");
	SetLong("A narrow gap in the wall of vines and brush allows passage to and from the Urmil Battlefield.");

    SetExits( ([
		"southwest" : "/domains/wilds/virtual/battlefield.c",
		]));
}
void init(){
    ::init();
}
