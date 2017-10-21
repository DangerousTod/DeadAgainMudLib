#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(5);
    SetShort("copy of tomb1.c");
    SetLong("A network of caves below the Nightfall Forest. The air is very still. You sense that you are not alone.");
    SetInventory(([
        "/domains/north/npc/spider" : 3,
      ]));
    SetExits( ([
        "north" : "/domains/north/room/tomb3",
        "southwest" : "/domains/north/room/tomb1",
        "east" : "/domains/north/room/tomb4.c",
      ]) );

}
void init(){
    ::init();
}
