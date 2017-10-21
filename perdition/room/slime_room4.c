#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Thick mud and moss everywhere. The trees are pack too thick, bugs everywhere.");
    SetExits( ([
        "southwest" : "/domains/perdition/room/slime_room2",
        "northeast" : "/domains/perdition/room/slime_room5.c",
      ]) );

}
void init(){
    ::init();
}
