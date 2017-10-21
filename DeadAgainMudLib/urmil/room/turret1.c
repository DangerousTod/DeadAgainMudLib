#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil City");
    SetLong("The guardhouse of the North Gate is sparse to the common eye. Several soldiers find it comfortable. To the northeast is a small room at the base of the north turret.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "west" : "/domains/urmil/room/n_gate2",
        "northeast" : "/domains/urmil/room/turret2.c",
      ]) );
}
void init(){
    ::init();
}
