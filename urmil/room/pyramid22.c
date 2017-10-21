#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A smelly corridor between huge slabs of stone. The floor is gravel and dirt sloping downward to the north. To the east is the base of a well.");
    SetExits( ([
        "north" : "/domains/urmil/room/pyramid23",
        "east" : "/domains/urmil/room/pyramid21.c",
      ]) );

}
void init(){
    ::init();
}
