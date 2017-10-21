#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of city_street2.c");
    SetLong("A long city street. To the north is a thick hedge. To the east and south are shops and occasionally crowds.");
    SetItems( ([
      ]) );
    SetExits( ([
		"east" : "/domains/perdition/room/hedge_gate",
		"northeast" : "/domains/perdition/room/city_street4",
		"southwest" : "/domains/perdition/room/city_street2",
		"west" : "/domains/perdition/room/tower1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
