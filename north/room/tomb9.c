#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(5);
    SetShort("copy of tomb6.c");
    SetLong("A network of caves below the Nightfall Forest. The air is very still. You sense that you are not alone.");
    SetExits( ([
        "southwest" : "/domains/north/room/tomb6",
        "east" : "/domains/north/room/spider1.c",
      ]) );
	SetDoor("east","/domains/north/doors/spider_gate.c");
    SetInventory(([
        "/domains/north/npc/vampire" : 2,
      ]));

}
void init(){
    ::init();
}
