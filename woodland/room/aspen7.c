#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forest on the west face of the foothills below the Wolff Mountains.");
    SetExits( ([
        "south" : "/domains/woodland/room/aspen8",
        "northwest" : "/domains/woodland/room/aspen6",
        "southwest" : "/domains/woodland/room/aspen5",
        "east" : "/domains/woodland/room/aspen9.c",
      ]) );

}
void init(){
    ::init();
}
