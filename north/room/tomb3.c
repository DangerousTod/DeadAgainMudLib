#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(5);
    SetShort("copy of tomb2.c");
    SetLong("A network of caves below the Nightfall Forest. The air is very still. You sense that you are not alone.");
    SetExits(([
        "south" : "/domains/north/room/tomb2",
      ]));

}
void init(){
    ::init();
}
