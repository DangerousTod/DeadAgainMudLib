#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Thick mud and a few soft wood trees mixed in among the swamp land brush.");
    SetExits( ([
        "south" : "/domains/perdition/room/slop_room10",
        "west" : "/domains/perdition/room/slop_room11",
        "east" : "/domains/perdition/room/slop_room13.c",
      ]) );

}
void init(){
    ::init();
}
