#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("The dense foliage breaks for a glimpse of the sky. Icky swamp land is all around.");
    SetInventory(([
        "/domains/perdition/npc/flamingo" : 3,
      ]));
    SetExits( ([
        "south" : "/domains/perdition/room/slime_room3",
        "east" : "/domains/perdition/room/slime_room7.c",
      ]) );

}
void init(){
    ::init();
}
