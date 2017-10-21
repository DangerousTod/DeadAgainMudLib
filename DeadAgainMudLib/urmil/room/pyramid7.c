#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of pyramid9.c");
    SetLong("room 7");
    SetExits( ([
        "west" : "/domains/urmil/room/pyramid9",
        "south" : "/domains/urmil/room/pyramid3.c",
      ]) );

}
void init(){
    ::init();
}
