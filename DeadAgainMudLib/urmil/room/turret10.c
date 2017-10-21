#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Above the Southern Gate");
    SetLong("Walkway on the southern wall.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "down" : "/domains/urmil/room/turret9",
        "west" : "/domains/urmil/room/wall2",
        "east" : "/domains/urmil/room/wall3.c",
      ]) );

}
void init(){
    ::init();
}
