#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Leather Foot Road");
    SetLong("The road is barely a trail into heavy terrain. Thickets and deafalls compete with crumbling stone to make progress slow.");
    SetInventory(([
        "/domains/north/npc/deer" : 1,
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/foot9",
        "northwest" : "/domains/north/room/foot11",
      ]) );

}
void init(){
    ::init();
}
