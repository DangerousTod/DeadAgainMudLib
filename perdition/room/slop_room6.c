#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Through the tree cover is a glimpse of black walls of North City and its gold and black checkered pennons. To the northeast and southwest is a muddy trail.");
    SetExits( ([
        "southwest" : "/domains/perdition/room/slop_room5",
        "northeast" : "/domains/perdition/room/slop_room11.c",
      ]) );

}
void init(){
    ::init();
}
