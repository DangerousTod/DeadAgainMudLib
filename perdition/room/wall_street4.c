#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of high_street3.c");
    SetLong("The worst of the worst hang about. The North Wall begins here rising up like jagged stairsteps.");
    SetItems( ([
      ]) );
    SetInventory(([
        "/domains/perdition/npc/thug" : 2,
      ]));
    SetExits( ([
        "east" : "/domains/perdition/room/high_street3",
        "west" : "/domains/perdition/room/wall_street3",
        "southwest" : "/domains/perdition/room/city_street4.c",
      ]) );

}

void init(){
    ::init();
}
