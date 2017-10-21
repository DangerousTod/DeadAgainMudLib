#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A muddy path climbs from the swampy fens to a clearing. The trees ticken around the path. The ferns are a deeper green, the edges of the leaves more sharply serrated.");
    SetExits( ([
        "north" : "/domains/northswamp/room/ferns3",
        "west" : "/domains/northswamp/room/mud2.c",
      ]) );

}
void init(){
    ::init();
}
