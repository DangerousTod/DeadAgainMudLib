#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("A bit more clay and earth here than elsewhere, tall straight trees stand in semi crooked rows.");
    SetExits( ([
        "south" : "/domains/perdition/room/slime_room2",
        "east" : "/domains/perdition/room/slime_room5",
        "north" : "/domains/perdition/room/slime_room6.c",
      ]) );

}
void init(){
    ::init();
}
