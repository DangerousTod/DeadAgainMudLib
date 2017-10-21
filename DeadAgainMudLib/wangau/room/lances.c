#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of hold.c");
    SetLong(" A holding tank for guards and men-at-arms. At least a dozen trained soldiers, sworn into the service of Castle Wangau and its master sit here in silk livery waiting for an alarm. There is barely a path through the lances, helmets, and breastplates.");
    SetExits( ([
        "west" : "/domains/wangau/room/hold",
        "east" : "/domains/wangau/room/swords.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
