#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
	SetAmbientLight(15);
    SetShort("Dark As A Coal Mine");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "up" : "/domains/woodland/room/tunnel2",
        "down" : "/domains/woodland/room/tunnel4.c",
      ]) );

}
void init(){
    ::init();
}
