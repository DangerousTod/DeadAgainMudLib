#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forest on the west face of the foothills below the Wolff Mountains.");
    SetExits( ([
        "east" : "/domains/woodland/room/aspen11",
        "southeast" : "/domains/woodland/room/aspen7",
        "southwest" : "/domains/woodland/room/aspen2.c",
      ]) );

}
void init(){
    ::init();
}
