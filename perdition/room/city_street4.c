#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of city_street3.c");
    SetLong("A long city street. To the north is a thick hedge. To the east and south are shops and occasionally crowds.");
    SetItems( ([
      ]) );
    SetInventory(([
        "/domains/perdition/npc/thug" : 1,
      ]));
    SetExits( ([
        "southwest" : "/domains/perdition/room/city_street3",
        "northeast" : "/domains/perdition/room/wall_street4.c",
      ]) );

}

void init(){
    ::init();
}
