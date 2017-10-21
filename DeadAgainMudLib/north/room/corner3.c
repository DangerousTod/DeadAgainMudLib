#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Shifty's Corner");
    SetLong("NE corner");
    SetExits( ([
        "south" : "/domains/north/room/corner1",
        "west" : "/domains/north/room/corner2",
        "east" : "/domains/north/room/silver1.c",
      ]) );

}
void init(){
    ::init();
}
