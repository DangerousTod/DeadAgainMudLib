#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of storehouse.c");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "up" : "/domains/urmil/room/storehouse",
        "down" : "/domains/urmil/room/access1.c",
      ]) );

}
void init(){
    ::init();
}
