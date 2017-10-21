#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("The spongy, soggy ground more roots than mud is cut with black runs of almost flowing slime to the southeast. to the north are human voices. Paths lead into the jungle to the north and northwest.");
    SetExits( ([
        "north" : "/domains/northswamp/room/swashbucklers1",
        "south" : "/domains/northswamp/room/ferns3",
        "southeast" : "/domains/northswamp/room/ferns2",
        "northwest" : "/domains/northswamp/room/swashbucklers2.c",
      ]) );

}
void init(){
    ::init();
}
