#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Leather Foot Road");
    SetLong("The road, if it can be called a road at all in this state, enters a crevasse. Nothing grows at the mouth of the crevasse. Sulphur is thick in the air.");
    SetExits( ([
        "southeast" : "/domains/north/room/foot10",
        "north" : "/domains/north/room/splinter1.c",
      ]) );

}
void init(){
    ::init();
}
