#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Walk Way");
    SetLong("Walkway on the southern wall.");

    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
        ({"snakes"}) : "A few seem domestic, many have been fried for lunch, and yet a few are wildly seeking escape, venomous too!",
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "west" : "/domains/urmil/room/wall1",
        "east" : "/domains/urmil/room/turret10.c",
      ]) );

}
void init(){
    ::init();
}
