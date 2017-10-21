#include <lib.h>
#include "/realms/vulture/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of swamp1.c");
    SetLong("You can slip and slide north to North City or south to High Bridge.");
    SetItems( ([
        "template" : "That's what this is.",
      ]) );
    SetExits(([
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
