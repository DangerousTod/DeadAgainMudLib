#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Boot tracks climb from the swamp onto an earthen protrusion of clay. A cabin is to the east");
    SetItems(([
        ({ "boot tracks", "tracks" }) : "Someone has recently worked up out of the swamp leaving thick streaks of exposed clay. Something else passed this way, something snake-ish but a sidewinder in the swamp?",
      ]));
    SetExits( ([
        "south" : "/domains/perdition/room/trash_room4",
        "northwest" : "/domains/perdition/room/slop_room10",
		"east" : "/domains/perdition/room/cabin.c",
      ]) );

}
void init(){
    ::init();
}
