#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze8.c");
    SetLong("Maze 7");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/maze8",
        "southwest" : "/domains/urmil/room/maze6",
        "west" : "/domains/urmil/room/maze5.c",
      ]) );

}
void init(){
    ::init();
}
