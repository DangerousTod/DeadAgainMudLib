#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("A breath taking view near the peak of the foothills below Wolff Mountains.");
    SetExits( ([
        "east" : "/domains/woodland/room/aspen18",
        "northwest" : "/domains/woodland/room/aspen11",
        "southwest" : "/domains/woodland/room/aspen10.c",
      ]) );

}
void init(){
    ::init();
}
