#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("A dense thicket in the swamp. The sound of gurgling water is a warning that the ground is unstable.");
    SetExits(([
        "east" : "/domains/perdition/room/slop_room4",
        "southwest" : "/domains/northswamp/room/mangrove3.c",
      ]));

}
void init(){
    ::init();
}
