#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of horsemarket.c");
    SetLong("Maze 12");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "west" : "/domains/urmil/room/horsemarket",
        "southeast" : "/domains/urmil/room/maze11.c",
      ]) );

}
void init(){
    ::init();
}
