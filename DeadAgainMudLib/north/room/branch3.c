#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Stoney Brook");
    SetLong("A forest of endless depth breaks to the northeast. Familiar songs and creaking trees are all around. Stoney Brook road breaks through the greenery into the world beyond.");
    SetExits( ([
        "northeast" : "/domains/north/room/brook4",
        "southwest" : "/domains/north/room/brook2.c",
      ]) );

}
void init(){
    ::init();
}
