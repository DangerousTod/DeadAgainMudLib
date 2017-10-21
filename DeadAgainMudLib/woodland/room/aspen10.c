#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("A breath taking view near the peak of the foothills below Wolff Mountains.");
    SetExits( ([
        "south" : "/domains/woodland/room/aspen15",
        "north" : "/domains/woodland/room/aspen11",
        "southwest" : "/domains/woodland/room/aspen12",
        "northeast" : "/domains/woodland/room/aspen17.c",
      ]) );

}
void init(){
    ::init();
}
