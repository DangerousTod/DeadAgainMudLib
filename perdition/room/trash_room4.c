#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("copy of trash_room2.c");
    SetLong("Slimy swamp is all around.");
    SetExits( ([
		"north" : "/domains/perdition/room/trash_room2",
		"east" : "/domains/perdition/room/trash_room1.c",
      ]) );

}
void init(){
    ::init();
}
