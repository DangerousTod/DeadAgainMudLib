#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Caves of Horror");
    SetLong("Under the cliff wall on the eastern side of the valley is the mouth of a cave.");
    SetExits( ([
        "southwest" : "/domains/north/room/valley2",
        "east" : "/domains/north/room/tomb1.c",
      ]) );
    SetInventory(([
        "/domains/north/npc/wolf" : 2,
      ]));

}
void init(){
    ::init();
}
