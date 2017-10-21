#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of nightf3.c");
    SetLong("The forest of night time is always quiet and dark.");
    SetInventory(([
        "/domains/north/npc/mage" : 2,
        "/domains/north/npc/vulture" : 1,
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/nightf3",
        "northwest" : "/domains/north/room/nightf5.c",
      ]) );

}
void init(){
    ::init();
}
