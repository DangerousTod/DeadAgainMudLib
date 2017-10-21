#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of s_wall1.c");
    SetLong("A jagged series of cliffs, crumbling and steep block your progress toward the desert. The west wall of Urmil stands on broken footings built on the natural rock of the cliffs. Vines and drain water break up the haphazard umber stones of the wall. To the east is the Farmers' Welland the camptown of caravaners who wait ther forming caravans before heading east. To the south through evergreen scrub and vines is the Urmil battle field.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits(([
        "east" : "/domains/urmil/room/s_wall1",
      ]));

}
void init(){
    ::init();
}
