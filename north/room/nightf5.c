#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of nightf4.c");
    SetLong("The forest of night time is always quiet and dark.");
    SetInventory(([
        "/domains/north/npc/mage" : 3,
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/nightf4",
        "northwest" : "/domains/north/room/nightf6",
      ]) );

}
void init(){
    ::init();
}
