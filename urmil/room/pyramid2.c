#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of pyramid3.c");
    SetLong("room 2");
    SetExits( ([
        "east" : "/domains/urmil/room/pyramid3",
        "up" : "/domains/urmil/room/pyramid1",
        "west" : "/domains/urmil/room/pyramid4.c",
      ]) );

}
void init(){
    ::init();
}
