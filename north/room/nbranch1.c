#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Gladiator School");
    SetLong("A path of sorts climbs the side of a mountain from a flattened moutaintop. A ledge leads to the next mountain, crude stairs cut into the rock lead up from there.");
    SetExits( ([
        "southeast" : "/domains/north/room/point1",
        "up" : "/domains/north/room/nbranch2.c",
      ]) );

}
void init(){
    ::init();
}
