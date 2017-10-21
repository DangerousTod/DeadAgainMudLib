#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("The walls of North City stand high above the swamps. To the west is the gate of North City and to the south is a murky swamp of mangroves and, rumor has it, giant snakes.");
    SetExits( ([
        "west" : "/domains/perdition/room/swamp1",
        "south" : "/domains/perdition/room/slop_room2.c",
      ]) );
}
void init(){
    ::init();
}
