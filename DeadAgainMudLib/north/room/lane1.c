#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("West Lane");
    SetLong("Golden wheat and purple flowers cover miles of rolling hills.");
    SetInventory(([
        "/domains/north/npc/swashbuckler" : 2,
      ]));
    SetExits( ([
        "east" : "/domains/north/room/foot9",
        "west" : "/domains/north/room/lane2.c",
      ]) );

}
void init(){
    ::init();
}
