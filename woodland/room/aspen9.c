#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forested mountain.");
    SetExits( ([
        "south" : "/domains/woodland/room/aspen16",
        "west" : "/domains/woodland/room/aspen7.c",
      ]) );

}
void init(){
    ::init();
}
