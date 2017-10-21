#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of lane2.c");
    SetLong("Golden wheat and purple flowers cover miles of rolling hills.");
    SetInventory(([
        "/lib/std/corpse" : 1,
        "/domains/north/npc/thief" : 1,
      ]));
    SetExits( ([
        "east" : "/domains/north/room/lane2",
        "northeast" : "/domains/north/room/brook7",
        "southwest" : "/domains/north/room/brook6",
        "west" : "/domains/north/room/land4.c",
      ]) );

}
void init(){
    ::init();
}
