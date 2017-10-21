#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Gladiator School");
    SetLong("Hand holds lead up an overhang of rock. To the southeast is a trail of cliff leaps. Voices, shouted commands, and the ring of steel on steel can be heard above.");
    SetExits( ([
        "southeast" : "/domains/north/room/nbranch2",
        "up" : "/domains/north/room/nbranch4.c",
      ]) );

}
void init(){
    ::init();
}
