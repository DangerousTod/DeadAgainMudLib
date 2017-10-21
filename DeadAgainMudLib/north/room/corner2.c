#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Shifty's Corner");
    SetLong("NW corner");
    SetExits( ([
        "east" : "/domains/north/room/corner3",
        "south" : "/domains/north/room/corner1.c",
      ]) );

}
void init(){
    ::init();
}
