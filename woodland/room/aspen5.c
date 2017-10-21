#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forest on the west face of the foothills below the Wolff Mountains.");
    SetExits( ([
        "east" : "/domains/woodland/room/aspen8",
        "west" : "/domains/woodland/room/aspen2",
        "northeast" : "/domains/woodland/room/aspen7.c",
      ]) );

}
void init(){
    ::init();
}
