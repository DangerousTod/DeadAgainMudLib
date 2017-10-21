#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("The spire topped walls of North City peek over the tree tops to the north and west. Deep swamp land is to the east and southeast.");
    SetExits( ([
        "north" : "/domains/perdition/room/slop_room1",
        "east" : "/domains/perdition/room/slop_room3",
        "southeast" : "/domains/perdition/room/slop_room4.c",
      ]) );

}
void init(){
    ::init();
}
