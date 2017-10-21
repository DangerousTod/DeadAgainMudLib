#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of nightf2.c");
    SetLong("The forest of night time is always quiet and dark.");
    SetInventory(([
        "/domains/north/npc/elf" : 3,
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/nightf2",
        "northwest" : "/domains/north/room/nightf4.c",
      ]) );

}
void init(){
    ::init();
}
