#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze4.c");
    SetLong("Maze 3");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/maze4",
        "southwest" : "/domains/urmil/room/maze2",
        "northeast" : "/domains/urmil/room/maze1.c",
      ]) );

}
void init(){
    ::init();
}
