#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("North Gate");
    SetLong("The North Gate of Urmil is heavily guarded. The walls of the city are thick but not high. A turret stands beside the city gate. To the south is a tan colored pyramid. To the west is a practice field for Urmil's numerous troops. To the east is a guardhouse outside of the turret. Long colorful banners hand to the south above a crowded squard, the pyramid sits beyond.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "north" : "/domains/northswamp/room/gate1",
        "east" : "/domains/urmil/room/turret1",
        "west" : "/domains/urmil/room/drill1",
        "south" : "/domains/urmil/room/shadow.c",
      ]) );
    SetDoor("north", "/domains/northswamp/doors/urmil_gate_n.c");
}
void init(){
    ::init();
}
