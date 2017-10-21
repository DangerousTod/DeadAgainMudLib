#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(5);
    SetShort("copy of tomb6.c");
    SetLong("A network of caves below the Nightfall Forest. The air is very still. You sense that you are not alone.");
    SetInventory(([
        "/domains/north/npc/orc" : 2,
      ]));
    SetExits( ([
        "east" : "/domains/north/room/tomb6",
        "north" : "/domains/north/room/tomb8.c",
      ]) );

}
void init(){
    ::init();
}
