#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("The bleak Wolff Mountains impose upon the sky to the east. Not far away, to the north and east is a natural bridge over South River.");
    SetExits( ([
        "west" : "/domains/woodland/room/aspen13",
        "north" : "/domains/woodland/room/aspen15.c",
      ]) );

}
void init(){
    ::init();
}
