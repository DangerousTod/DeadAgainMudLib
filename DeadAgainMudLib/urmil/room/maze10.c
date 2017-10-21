#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze11.c");
    SetLong("Maze 10");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "southwest" : "/domains/urmil/room/maze9",
        "northwest" : "/domains/urmil/room/maze11",
        "east" : "/domains/urmil/room/maze8.c",
      ]) );

}
void init(){
    ::init();
}
