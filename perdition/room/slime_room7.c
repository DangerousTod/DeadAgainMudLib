#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Thick vines and twisted roots make every step a battle.");
    SetExits( ([
        "west" : "/domains/perdition/room/slime_room6",
        "east" : "/domains/perdition/room/slime_room8.c",
      ]) );

}
void init(){
    ::init();
}
