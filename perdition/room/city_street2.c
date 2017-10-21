#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of city_street1.c");
    SetLong("A long city street. To the north is a thick hedge. To the east and south are shops and occasionally crowds.");
    SetItems( ([
      ]) );
    SetInventory(([
        "/domains/perdition/npc/juggler" : 2,
      ]));
    SetExits( ([
        "northeast" : "/domains/perdition/room/city_street3",
        "southwest" : "/domains/perdition/room/city_street1",
        "east" : "/domains/perdition/room/fighter_t.c",
      ]) );

}

void init(){
    ::init();
}
