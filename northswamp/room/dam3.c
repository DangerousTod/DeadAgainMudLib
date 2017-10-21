#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("The side of a steep dike above a swamp. A town or small city is above, at the top of a southward trail up the side of the dike.");
    SetExits( ([
        "south" : "/domains/northswamp/room/dike1",
        "north" : "/domains/northswamp/room/dam2.c",
      ]) );

}
void init(){
    ::init();
}
