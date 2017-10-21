#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Leather Foot Trail");
    SetLong("A forest at the edge of a swamp. A wide drain pipe allows access to the under city of Urmil. The pipe is to the southeast.");
    SetExits( ([
        "northwest" : "/domains/north/room/foot2",
        "southeast" : "/domains/woodland/room/tunnel18.c",
      ]) );
}
void init(){
    ::init();
}
