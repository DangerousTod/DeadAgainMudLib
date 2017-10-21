#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Stoney Brook");
    SetLong("Thickets and vines seems to leap from the ground. At once the wheat fields to the north are near and then far away, impossibly far. So too is a forest of oak and maple to the south come and then gone.");
    SetExits( ([
        "northeast" : "/domains/north/room/brook5",
        "southwest" : "/domains/north/room/branch3.c",
      ]) );

}
void init(){
    ::init();
}
