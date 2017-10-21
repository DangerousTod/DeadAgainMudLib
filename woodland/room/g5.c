#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Fort");
    SetLong("A corridor in the ogre fortress. to the east is the main drinking hall and to the south is a utility room.");
    SetExits( ([
        "south" : "/domains/woodland/room/g3",
        "east" : "/domains/woodland/room/g4",
        "north" : "/domains/woodland/room/g6.c",
      ]) );

}
void init(){
    ::init();
}
