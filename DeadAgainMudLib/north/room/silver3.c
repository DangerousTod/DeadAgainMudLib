#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of silver2.c");
    SetLong("The Silver Trail");
    SetExits( ([
        "east" : "/domains/north/room/silver4",
        "west" : "/domains/north/room/silver2",
        "northwest" : "/domains/north/room/nightf1.c",
      ]) );

}
void init(){
    ::init();
}
