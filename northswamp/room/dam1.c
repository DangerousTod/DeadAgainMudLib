#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("copy of trail1.c");
    SetLong("The curving side of a dike above a jungle. High above is a city gate. The gate is accessible only by following the dike to the west or east.");
    SetExits( ([
        "west" : "/domains/northswamp/room/trail1",
        "east" : "/domains/northswamp/room/dam2.c",
      ]) );

}
void init(){
    ::init();
}
