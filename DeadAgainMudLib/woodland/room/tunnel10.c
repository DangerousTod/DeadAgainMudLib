#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(0);
    SetShort("Dark As A Coal Mine");
    SetLong("A deep gouge into the ground. Sunlight quickly becomes a fond memory.");
    SetExits( ([
        "northeast" : "/domains/woodland/room/tunnel9",
        "southwest" : "/domains/woodland/room/tunnel11.c",
      ]) );

}
void init(){
    ::init();
}
