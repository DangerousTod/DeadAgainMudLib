#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forest on the west face of the foothills below the Wolff Mountains.");
    SetExits( ([
        "southeast" : "/domains/woodland/room/aspen17",
        "west" : "/domains/woodland/room/aspen6",
        "south" : "/domains/woodland/room/aspen10.c",
      ]) );

}
void init(){
    ::init();
}
