#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forest on the west face of the foothills below the Wolff Mountains.");
    SetExits( ([
        "south" : "/domains/woodland/room/aspen1",
        "northeast" : "/domains/woodland/room/aspen6",
        "east" : "/domains/woodland/room/aspen5.c",
      ]) );

}
void init(){
    ::init();
}
