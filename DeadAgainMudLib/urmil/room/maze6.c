#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of maze7.c");
    SetLong("Maze 6");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "northeast" : "/domains/urmil/room/maze7",
        "west" : "/domains/urmil/room/maze4.c",
      ]) );

}
void init(){
    ::init();
}
