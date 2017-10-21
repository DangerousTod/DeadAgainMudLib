#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The South Wall of Urmil");
    SetLong("The southern wall of Urmil City. To the soug\th is a broken badland. It has been the scene of many a seige on fair Urmil. To the west is a shimmering desert. To the east is a well near Urmil Road where travelers and pack animals are gathered.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "east" : "/domains/urmil/room/s_gate1",
        "west" : "/domains/urmil/room/s_wall2.c",
      ]) );

}
void init(){
    ::init();
}
