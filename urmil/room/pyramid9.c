#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of pyramid10.c");
    SetLong("room 9");
    SetExits( ([
        "down" : "/domains/urmil/room/pyramid10",
        "west" : "/domains/urmil/room/pyramid8",
        "east" : "/domains/urmil/room/pyramid7.c",
      ]) );

}
void init(){
    ::init();
}
