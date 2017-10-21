#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Urmil Road");
    SetLong("The end of Urmil Road, Urmil City. To the north is a dense jungle.");
    SetExits(([
        "west" : "/domains/northswamp/room/dike1",
      ]));

}
void init(){
    ::init();
}
