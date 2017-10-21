#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of hold.c");
    SetLong("A large storehouse for vendors at the carnival to the west. Stacks of bales of piles of anything frilly, salty or sweat are barely organized here. And everywhere, of course are rats, rats, and more rats. Cute friendly rats for the most part, but rats nonetheless.");
    SetExits( ([
        "east" : "/domains/wangau/room/hold",
        "west" : "/domains/wangau/room/carnival2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
