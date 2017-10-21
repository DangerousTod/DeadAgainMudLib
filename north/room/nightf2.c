#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of nightf1.c");
    SetLong("The forest of night time is always quiet and dark.");
    SetExits( ([
        "southeast" : "/domains/north/room/nightf1",
        "northwest" : "/domains/north/room/nightf3.c",
      ]) );

}
void init(){
    ::init();
}
