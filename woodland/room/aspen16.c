#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("You stand at the summit of the foothills below Wolff Mountains. Dense forest is to the east and north. Thick smoke rises from something big to the northeast.");
    SetExits( ([
        "north" : "/domains/woodland/room/aspen9",
        "southeast" : "/domains/woodland/room/aspen12",
        "west" : "/domains/woodland/room/aspen8",
        "northeast" : "/domains/woodland/room/g_gate.c",
      ]) );

}
void init(){
    ::init();
}
