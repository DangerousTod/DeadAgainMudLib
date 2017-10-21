#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of pyramid9.c");
    SetLong("room 8");
    SetExits( ([
        "east" : "/domains/urmil/room/pyramid9",
        "south" : "/domains/urmil/room/pyramid4.c",
      ]) );

}
void init(){
    ::init();
}
