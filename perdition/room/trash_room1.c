#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Slimy swamp is all around.");
    SetExits( ([
        "west" : "/domains/perdition/room/slop_room9",
        "north" : "/domains/perdition/room/trash_room2.c",
      ]) );

}
void init(){
    ::init();
}
