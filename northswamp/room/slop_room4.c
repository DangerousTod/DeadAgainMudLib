#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("copy of slop_room3.c");
    SetLong("Slimy swamp is all around.");
    SetExits( ([
        "south" : "/domains/northswamp/room/slop_room3",
        "southeast" : "/domains/northswamp/room/slop_room1.c",
      ]) );

}
void init(){
    ::init();
}
