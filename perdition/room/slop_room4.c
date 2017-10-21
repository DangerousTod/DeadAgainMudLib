#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Narrow avenues in a thicket of tangled bush.");
    SetInventory(([
        "/domains/perdition/npc/parrot" : 5,
      ]));
    SetExits( ([
        "northeast" : "/domains/perdition/room/slop_room3",
        "northwest" : "/domains/perdition/room/slop_room2",
        "west" : "/domains/perdition/room/slop_room8.c",
      ]) );

}
void init(){
    ::init();
}
