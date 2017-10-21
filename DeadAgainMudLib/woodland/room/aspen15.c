#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("A breath taking view at the peak of the foothills below Wolff Mountains. A land bridge over South River is to the northeast.");
    SetExits( ([
        "north" : "/domains/woodland/room/aspen10",
        "northeast" : "/domains/woodland/room/aspen18",
        "south" : "/domains/woodland/room/aspen14.c",
      ]) );

}
void init(){
    ::init();
}
