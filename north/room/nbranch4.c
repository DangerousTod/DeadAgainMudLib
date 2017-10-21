#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Gladiator School");
    SetLong("A Gladiator Training School sits here on a mountaintop. It is within the circle of shining white pillars to the north. A pediment crowns the entry to the practice field within the circle. A domed building sits at the peak of polished steps.");
    SetExits( ([
        "down" : "/domains/north/room/nbranch3",
        "west" : "/domains/north/room/gladiator1.c",
      ]) );
    SetInventory(([
        "/domains/north/npc/glad1" : 2,
      ]));

}
void init(){
    ::init();
}
