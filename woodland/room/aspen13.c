#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forested mountain.");
    SetExits( ([
        "south" : "/domains/woodland/room/tunnel1",
        "east" : "/domains/woodland/room/aspen14",
        "west" : "/domains/woodland/room/aspen4",
        "north" : "/domains/woodland/room/aspen12.c",
      ]) );

}
void init(){
    ::init();
}
