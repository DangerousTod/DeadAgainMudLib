#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Stoney Brook");
    SetLong("The fields are less uniform with wheat here. The hills roll a bit more, there are a few rocks here and there. The wheat, unlike the cropland to the north, grows in thick lusterous bunches. Each step seems to take you farther than a single stride should.");
    SetExits( ([
        "northeast" : "/domains/north/room/brook6",
        "southwest" : "/domains/north/room/brook4.c",
      ]) );

}
void init(){
    ::init();
}
