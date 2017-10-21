#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forested mountain.");
    SetExits( ([
        "west" : "/domains/woodland/room/aspen3",
        "east" : "/domains/woodland/room/aspen13.c",
      ]) );

}
void init(){
    ::init();
}
