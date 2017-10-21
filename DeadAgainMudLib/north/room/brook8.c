#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Stoney Brook");
    SetLong("A line of trees marks the edge of a large wheat field to the south. A tiny village is to the northeast.");
    SetInventory(([
        "/domains/north/npc/sleen1" : 1,
      ]));
    SetExits( ([
        "southwest" : "/domains/north/room/brook7",
        "northeast" : "/domains/north/room/corner1.c",
      ]) );

}
void init(){
    ::init();
}
