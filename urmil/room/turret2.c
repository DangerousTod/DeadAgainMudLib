#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of turret1.c");
    SetLong("Narrow windows allow a view of soldiers guarding the North Gate. The gate control lever is here.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "southwest" : "/domains/urmil/room/turret1",
        "up" : "/domains/urmil/room/turret3.c",
      ]) );
    SetInventory(([
        "/domains/urmil/obj/n_gate_lever" : 1,
      ]));

}
void init(){
    ::init();
}
