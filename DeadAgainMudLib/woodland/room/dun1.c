#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Dungeon");
    SetLong("A fould stench, fouler than even the reek of a dozen ogres above darkens this room. Devices of torture lay to the south and, farther south, the glint perhaps of gold?");
    SetExits( ([
        "up" : "/domains/woodland/room/g6",
        "south" : "/domains/woodland/room/dun2.c",
      ]) );

}
void init(){
    ::init();
}
