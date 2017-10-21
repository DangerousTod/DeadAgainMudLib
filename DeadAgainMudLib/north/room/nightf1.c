#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Night Falls Forest");
    SetLong("The forest of night time is always quiet and dark.");
    SetInventory(([
        "/domains/north/npc/spider" : 4,
        "/domains/north/npc/orc" : 5,
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/silver3",
        "northwest" : "/domains/north/room/nightf2.c",
      ]) );

}
void init(){
    ::init();
}
