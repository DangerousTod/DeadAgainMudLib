#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Dark As A Coal Mine");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "up" : "/domains/woodland/room/tunnel16",
        "northwest" : "/domains/woodland/room/tunnel18.c",
      ]) );

}
void init(){
    ::init();
}
