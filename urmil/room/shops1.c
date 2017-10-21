#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of drill5.c");
    SetLong("The North Gate of Urmil is heavily guarded. The walls of the city are heavy and wide, though not high. A turret stands beside the city gate. To the south is a tan colored pyramid. To the west is a practice field for Urmil'snumerous soldiers and guards. To the east is a guardhouse outside of the turret. Long colorful banners hang to the south above a crowded square, the pyramid sits beyond.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits(([
        "north" : "/domains/urmil/room/drill5",
      ]));

}
void init(){
    ::init();
}
