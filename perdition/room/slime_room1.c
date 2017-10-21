#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("A bole of clay where a rustic cabin sits. The quote-unquote door of the cabin is a hole in the wall to the south.");
    SetItems(([
        ({ "wall", "cabin", "hole in the wall" }) : "The cabin walls are constructed of slabs of rammed eart, very trendy. The hole is shored up by split tree trunks.",
      ]));
    SetExits( ([
		"south" : "/domains/perdition/room/cabin",
        "west" : "/domains/perdition/room/slop_room14",
        "north" : "/domains/perdition/room/slime_room2.c",
      ]) );

}
void init(){
    ::init();
}
