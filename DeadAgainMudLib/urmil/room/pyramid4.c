#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of pyramid2.c");
    SetLong("room 4");
    SetExits( ([
        "east" : "/domains/urmil/room/pyramid2",
        "north" : "/domains/urmil/room/pyramid8.c",
      ]) );

}
void init(){
    ::init();
}
