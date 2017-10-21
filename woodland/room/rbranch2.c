#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Hidden Guard Tunnel");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "south" : "/domains/woodland/room/rbranch3",
        "north" : "/domains/woodland/room/rbranch1.c",
      ]) );

}
void init(){
    ::init();
}
