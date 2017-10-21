#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Silver Trail");
    SetLong("The Silver Trail");
    SetExits( ([
        "west" : "/domains/north/room/corner3",
        "east" : "/domains/north/room/silver2.c",
      ]) );

}
void init(){
    ::init();
}
