#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Dark As A Coal Mine");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "southeast" : "/domains/woodland/room/tunnel15",
        "down" : "/domains/woodland/room/tunnel17.c",
      ]) );

}
void init(){
    ::init();
}
