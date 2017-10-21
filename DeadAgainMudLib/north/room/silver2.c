#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of silver1.c");
    SetLong("The Silver Trail");
    SetInventory(([
        "/domains/north/npc/sleen1" : 2,
      ]));
    SetExits( ([
        "west" : "/domains/north/room/silver1",
        "east" : "/domains/north/room/silver3.c",
      ]) );

}
void init(){
    ::init();
}
