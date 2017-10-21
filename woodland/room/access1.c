#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("copy of lbranch1.c");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits(([
        "down" : "/domains/woodland/room/lbranch1",
      ]));

}
void init(){
    ::init();
}
