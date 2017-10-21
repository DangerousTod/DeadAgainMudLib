#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("outside Urmil City");
    SetLong("The southern gate of Urmil City. To the south is a broken badland, the scene of many a seige on fair Urmil. To the west is a shimmering desert. To the east is a well near Urmil Road.");

    SetExits( ([
        "north" : "/domains/urmil/room/s_gate2",
	"south" : "/domains/wilds/virtual/battlefield/-50,9",
        "west" : "/domains/urmil/room/s_wall1.c",
      ]) );
	SetEnters(([
		"battlefield" : "/domains/wilds/virtual/battlefield/-45,9",
		]));
    SetDoor("north","/domains/urmil/doors/urmil_gate_s.c");

}
void init(){
    ::init();
}
