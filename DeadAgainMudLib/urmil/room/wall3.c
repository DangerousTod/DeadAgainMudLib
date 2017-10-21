#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Walk Way");
    SetLong("Walkway on the southern wall.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "west" : "/domains/urmil/room/turret10",
        "east" : "/domains/urmil/room/wall4.c",
      ]) );

}
void init(){
    ::init();
}
