#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Hidden Guard Tunnel");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "south" : "/domains/woodland/room/rbranch2",
        "up" : "/domains/urmil/room/turret14.c",
      ]) );

}
void init(){
    ::init();
}
