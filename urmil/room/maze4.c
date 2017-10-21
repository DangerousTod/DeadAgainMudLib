#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze6.c");
    SetLong("Maze 4");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "east" : "/domains/urmil/room/maze6",
        "north" : "/domains/urmil/room/maze3.c",
      ]) );

}
void init(){
    ::init();
}
