#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("The water is deep and not so foul here where the trees are tall. Some rubbish has collected here, probably from a recent flood.");
    SetExits( ([
        "north" : "/domains/perdition/room/slop_room10",
        "west" : "/domains/perdition/room/slop_room3",
        "east" : "/domains/perdition/room/trash_room1.c",
      ]) );

}
void init(){
    ::init();
}
