#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of pyramid7.c");
    SetLong("room 3");
    SetExits( ([
        "north" : "/domains/urmil/room/pyramid7",
        "west" : "/domains/urmil/room/pyramid2.c",
      ]) );

}
void init(){
    ::init();
}
