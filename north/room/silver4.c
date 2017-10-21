#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of silver3.c");
    SetLong("The Silver Trail");
    SetInventory(([
        "/domains/north/npc/deer" : 4,
      ]));
    SetExits( ([
        "west" : "/domains/north/room/silver3",
        "east" : "/domains/north/room/silver5.c",
      ]) );

}
void init(){
    ::init();
}
