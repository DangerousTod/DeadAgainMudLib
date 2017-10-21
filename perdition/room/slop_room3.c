#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Slimy swamp is all around.");
    SetInventory(([
        "/domains/perdition/npc/g_anaconda" : 1,
      ]));
    SetExits( ([
        "east" : "/domains/perdition/room/slop_room9",
        "west" : "/domains/perdition/room/slop_room2",
        "southwest" : "/domains/perdition/room/slop_room4",
        "northwest" : "/domains/perdition/room/slop_room5",
        "northeast" : "/domains/perdition/room/slop_room10.c",
      ]) );

}
void init(){
    ::init();
}
