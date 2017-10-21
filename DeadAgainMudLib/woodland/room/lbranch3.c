#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Hidden Guard Tunnel");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "west" : "/domains/woodland/room/lbranch4",
        "east" : "/domains/woodland/room/lbranch2.c",
      ]) );

}
void init(){
    ::init();
}
