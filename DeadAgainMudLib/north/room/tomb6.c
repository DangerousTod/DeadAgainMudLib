#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(5);
    SetShort("copy of tomb5.c");
    SetLong("A network of caves below the Nightfall Forest. The air is very still. You sense that you are not alone.");
    SetInventory(([
        "/domains/north/npc/gargoyle" : 4,
      ]));
    SetExits( ([
        "south" : "/domains/north/room/tomb5",
        "west" : "/domains/north/room/tomb7",
        "northeast" : "/domains/north/room/tomb9.c",
      ]) );

}
void init(){
    ::init();
}
