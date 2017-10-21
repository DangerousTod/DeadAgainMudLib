#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of corner1.c");
    SetLong("SW corner");
    SetExits( ([
        "west" : "/domains/north/room/corner1",
        "north" : "/domains/north/room/corner3.c",
      ]) );

}
void init(){
    ::init();
}
