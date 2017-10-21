#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Dark As A Coal Mine");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "east" : "/domains/woodland/room/lbranch4",
        "northeast" : "/domains/woodland/room/tunnel11",
        "southwest" : "/domains/woodland/room/tunnel13",
        "north" : "/domains/woodland/room/rbranch4.c",
      ]) );

}
void init(){
    ::init();
}
