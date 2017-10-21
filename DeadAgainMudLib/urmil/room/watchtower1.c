#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Watch Tower");
    SetLong("A watchtower standing on the east wall of the city. urmil's eyes in the sky.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/wall7",
        "up" : "/domains/urmil/room/watchtower2.c",
      ]) );

}
void init(){
    ::init();
}
