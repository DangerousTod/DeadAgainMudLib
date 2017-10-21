#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("copy of tunnel15.c");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits(([
        "southeast" : "/domains/woodland/room/tunnel15",
      ]));

}
void init(){
    ::init();
}
