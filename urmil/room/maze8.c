#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze10.c");
    SetLong("Maze 8");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "west" : "/domains/urmil/room/maze10",
        "north" : "/domains/urmil/room/maze7.c",
      ]) );

}
void init(){
    ::init();
}
