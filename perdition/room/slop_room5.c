#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Moss holds the mud together lending to taller straighter trees. A primitive sleeping place has been woven into the branches of the trees.");
    SetItems(([
        ({ "sleeping place", "woven branches", "branches" }) : "Who or whatever sleeps here must be tough and awful big. The branches hide thorns beneath the leaves and the bark ruptures when it is twisted. This does not look like a comfy place to get a night's rest.",
      ]));
    SetExits( ([
        "northeast" : "/domains/perdition/room/slop_room6",
        "southeast" : "/domains/perdition/room/slop_room3",
        "east" : "/domains/perdition/room/slop_room10.c",
      ]) );

}
void init(){
    ::init();
}
