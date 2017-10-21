#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("A breath taking view near the peak of the foothills below Wolff Mountains.");
    SetExits( ([
        "west" : "/domains/woodland/room/aspen17",
        "southwest" : "/domains/woodland/room/aspen15.c",
      ]) );

}
void init(){
    ::init();
}
