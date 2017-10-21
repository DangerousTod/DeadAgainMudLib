#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Dark As A Coal Mine");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "northeast" : "/domains/woodland/room/tunnel12",
        "down" : "/domains/woodland/room/tunnel14.c",
      ]) );

}
void init(){
    ::init();
}
