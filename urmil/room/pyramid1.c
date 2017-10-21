#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of pyramid_entrance.c");
    SetLong("The south face of the pyramid is divided by a gap of three arm-spans. The gap insets the slanting pyramid face by twenty feet or more. A ramp slopes down into the pyramid between the walls of the gap, a mural of a warrior fighting a dragon is above.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "up" : "/domains/urmil/room/pyramid_entrance",
        "down" : "/domains/urmil/room/pyramid2.c",
      ]) );

}
void init(){
    ::init();
}
