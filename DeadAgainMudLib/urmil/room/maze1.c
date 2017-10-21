#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze3.c");
    SetLong("Maze 3");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits(([
	   "north" : "/domains/urmil/room/garden.c",
        "southwest" : "/domains/urmil/room/maze3",
      ]));

}
void init(){
    ::init();
}
