#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("A breath taking view near the peak of the foothills below Wolff Mountains.");
    SetExits( ([
        "south" : "/domains/woodland/room/aspen13",
        "northeast" : "/domains/woodland/room/aspen10",
        "northwest" : "/domains/woodland/room/aspen16.c",
      ]) );

}
void init(){
    ::init();
}
