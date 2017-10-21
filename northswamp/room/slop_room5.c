#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A channel of sorts divides a muddy area to the north from a thickly grasses area to the south. The green fuzzy shows chop from the motion of the water in the channel. The water quickens to the southwest.");
    SetExits( ([
        "north" : "/domains/northswamp/room/troll2",
        "northeast" : "/domains/northswamp/room/slop_room3",
        "southwest" : "/domains/northswamp/room/trash_room1",
        "northwest" : "/domains/northswamp/room/troll1",
        "south" : "/domains/northswamp/room/trash_room2.c",
      ]) );

}
void init(){
    ::init();
}
