#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("North City must be near, an oily sheen floats at the top of the murky water. The foliage is almost too thick to pass through.");
    SetExits( ([
        "southeast" : "/domains/perdition/room/slop_room10",
        "southwest" : "/domains/perdition/room/slop_room6",
        "east" : "/domains/perdition/room/slop_room12.c",
      ]) );

}
void init(){
    ::init();
}
