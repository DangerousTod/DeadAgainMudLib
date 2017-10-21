#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil Horse Market");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
	   "south" : "/domains/urmil/room/s_gate2.c",
        "west" : "/domains/urmil/room/shops4",
        "east" : "/domains/urmil/room/maze12.c",
      ]) );

}
void init(){
    ::init();
}
