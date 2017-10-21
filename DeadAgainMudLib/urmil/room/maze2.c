#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze3.c");
    SetLong("Maze 2");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits(([
        "northeast" : "/domains/urmil/room/maze3",
      ]));

}
void init(){
    ::init();
}
