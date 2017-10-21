#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Hidden Guard Tunnel");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "west" : "/domains/woodland/room/tunnel12",
        "east" : "/domains/woodland/room/lbranch3.c",
      ]) );

}
void init(){
    ::init();
}
