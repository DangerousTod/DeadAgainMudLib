#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("A murky lagoon ringed with muddy sloughs.");
    SetExits( ([
        "north" : "/domains/perdition/room/slop_room12",
        "south" : "/domains/perdition/room/slop_room9",
        "east" : "/domains/perdition/room/slop_room14",
        "northeast" : "/domains/perdition/room/slop_room13",
        "west" : "/domains/perdition/room/slop_room5",
        "southwest" : "/domains/perdition/room/slop_room3",
        "northwest" : "/domains/perdition/room/slop_room11",
        "southeast" : "/domains/perdition/room/trash_room2.c",
      ]) );

}
void init(){
    ::init();
}
