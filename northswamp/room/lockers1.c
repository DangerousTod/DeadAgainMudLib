#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Swampland");
    SetLong("Mangrove trees dominate the swamp.");
    SetExits( ([
        "south" : "/domains/northswamp/room/ferns2",
        "east" : "/domains/northswamp/room/mangrove1",
        "north" : "/domains/northswamp/room/mangrove2.c",
      ]) );

}
void init(){
    ::init();
}
