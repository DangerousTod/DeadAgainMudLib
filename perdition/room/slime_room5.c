#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Hundreds of frogs peep through the mirk. The bugs are too thick. So thick it is almost hard to breathe.");
    SetExits( ([
        "west" : "/domains/perdition/room/slime_room3",
        "southwest" : "/domains/perdition/room/slime_room4",
        "northeast" : "/domains/perdition/room/slime_room8.c",
      ]) );

}
void init(){
    ::init();
}
