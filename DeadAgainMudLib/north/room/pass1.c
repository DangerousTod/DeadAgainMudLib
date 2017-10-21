#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of foot10.c");
    SetLong("The road, if it can be called a road at all in this state, enters a crevasse. Nothing grows at the mouth of the crevasse. Sulphur is thick in the air.");
    SetExits(([
        "south" : "/domains/north/room/foot10",
      ]));

}
void init(){
    ::init();
}
