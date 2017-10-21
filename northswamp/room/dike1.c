#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Urmil Road");
    SetLong("The walls of Urmil City are stout and old. Urmil Road is a two-track rut to the east into the hills. To the west is a city gate guarded by soldiers.");
    SetExits( ([
        "north" : "/domains/northswamp/room/dam3",
        "west" : "/domains/northswamp/room/gate1",
        "east" : "/domains/northswamp/room/urmil_road1.c",
      ]) );

}
void init(){
    ::init();
}
