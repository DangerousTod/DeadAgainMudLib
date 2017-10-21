#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("More solid footing can be found to the north and northeast. The heavy air to the southwest and west indicate the deepest swamp is in that direction.");
    SetExits( ([
        "north" : "/domains/perdition/room/trash_room3",
        "southeast" : "/domains/perdition/room/slop_room14",
        "west" : "/domains/perdition/room/slop_room12",
        "southwest" : "/domains/perdition/room/slop_room10",
        "northeast" : "/domains/perdition/room/slime_room2.c",
      ]) );

}
void init(){
    ::init();
}
