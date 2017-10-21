#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Leather Foot Road");
    SetLong("A road through a thick forest. If not for the dozens of boulders scattered about the trees would stand too thick for all but the most nimble. Red orange moss clings to every surface. Creepers hang thick from the trees.");
    SetExits( ([
        "southeast" : "/domains/north/room/foot1",
        "northwest" : "/domains/north/room/foot3.c",
      ]) );

}
void init(){
    ::init();
}
