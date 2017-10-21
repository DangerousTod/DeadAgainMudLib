#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("A sort of cross road in the swamp, if any road would ever stay above water.");
    SetExits( ([
        "south" : "/domains/perdition/room/slime_room1",
        "north" : "/domains/perdition/room/slime_room3",
        "southwest" : "/domains/perdition/room/slop_room13",
        "northeast" : "/domains/perdition/room/slime_room4.c",
      ]) );

}
void init(){
    ::init();
}
