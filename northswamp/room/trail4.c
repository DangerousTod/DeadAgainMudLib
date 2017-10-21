#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Urmil City");
    SetLong("The end of Urmil Road is to the east. Soldiers stand guard there at the Urmil City Gate. To the north, down a dangerously steep trail is a dense jungle.");
    SetExits( ([
        "north" : "/domains/northswamp/room/trail3",
        "east" : "/domains/northswamp/room/gate1.c",
      ]) );

}
void init(){
    ::init();
}
