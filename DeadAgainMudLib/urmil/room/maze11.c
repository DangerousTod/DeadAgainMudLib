#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze12.c");
    SetLong("Maze 11");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "northwest" : "/domains/urmil/room/maze12",
        "southeast" : "/domains/urmil/room/maze10.c",
      ]) );

}
void init(){
    ::init();
}
