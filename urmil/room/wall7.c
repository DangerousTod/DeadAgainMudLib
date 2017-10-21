#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Walk Way");
    SetLong("A walkway on the east wall.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/wall6",
        "north" : "/domains/urmil/room/watchtower1.c",
      ]) );

}
void init(){
    ::init();
}
