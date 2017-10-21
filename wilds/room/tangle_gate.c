#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
	SetClimate("temperate");
    SetAmbientLight(30);
	SetShort("Tangled Gate");
	SetLong("A narrow gap in the wall of vines and brush allows passage to and from the Urmil Battlefield.");

    SetExits( ([
		"east" : "/domains/wilds/virtual/battlefield.c",
		"west" : "/domains/wilds/virtual/tangle.c",
		]));
}
void init(){
    ::init();
}
