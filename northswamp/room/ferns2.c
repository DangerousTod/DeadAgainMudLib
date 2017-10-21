#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("Slicks of black mud join together in tributaries of a stream running south. To the north is a rocky trail upinto thick green foliage.");
    SetExits( ([
        "north" : "/domains/northswamp/room/lockers1",
        "south" : "/domains/northswamp/room/ferns1",
        "northwest" : "/domains/northswamp/room/ferns4.c",
      ]) );

}
void init(){
    ::init();
}
