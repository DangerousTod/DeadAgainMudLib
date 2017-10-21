#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Stoney Brook");
    SetLong("The stones of Stoney Brook Road lay dry against each other bound up by the forest on either side. The forest of hardwood is both cool and warm. Sunlight pierces through the canopy.");
    SetExits( ([
        "northeast" : "/domains/north/room/branch3",
        "southwest" : "/domains/north/room/brook1.c",
      ]) );

}
void init(){
    ::init();
}
