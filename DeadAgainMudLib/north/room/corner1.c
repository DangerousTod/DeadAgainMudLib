#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Shifty's Corner");
    SetLong("SE corner");
    SetExits( ([
        "east" : "/domains/north/room/corner4",
        "southwest" : "/domains/north/room/brook8",
        "north" : "/domains/north/room/corner3.c",
      ]) );

}
void init(){
    ::init();
}
