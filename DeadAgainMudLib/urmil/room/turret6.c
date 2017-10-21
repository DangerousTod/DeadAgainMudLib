#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of shops3.c");
    SetLong("The lower hall of the southern turret. This is secretly a very busy place. Outside is the bazaar, inside is a city guard command center.");

    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
        ({"snakes"}) : "A few seem domestic, many have been fried for lunch, and yet a few are wildly seeking escape, venomous too!",
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetInventory(([
        "/domains/urmil/npc/soldier" : 6,
        "/domains/urmil/obj/bench" : 6,
        "/domains/urmil/npc/sergent" : 2,
        "/domains/urmil/obj/wrack" : 2,
      ]));
    SetExits( ([
        "northeast" : "/domains/urmil/room/shops3",
        "up" : "/domains/urmil/room/turret7.c",
      ]) );

}
void init(){
    ::init();
}
