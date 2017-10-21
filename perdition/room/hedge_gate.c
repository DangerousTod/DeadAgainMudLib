#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Shopping Center");
    SetLong("An urban shopping center where one finds all manner of goods. Adventurers are quite welcome here. a broad staircase descends to the main bazaar. To the west, across a lively city street is a curious gap in the hedge with a thick gate.");
    SetItems( ([
      ]) );
    SetExits( ([
		"west" : "/domains/perdition/room/city_street3",
		"down" : "/domains/perdition/room/bazaar_main1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
