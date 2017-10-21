#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of nightf5.c");
    SetLong("The forest of night time is always quiet and dark.");
    SetInventory(([
        "/domains/north/npc/thief" : 4,
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/nightf5",
        "north" : "/domains/north/room/magic1.c",
      ]) );

}
void init(){
    ::init();
}
