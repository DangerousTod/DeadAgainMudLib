#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil Bazaar");
    SetLong("A vibrant bazaar ofmerchants hawking goods from every land imaginable. Fruits and snakes must be local staples. A few of the merchants even sell living snakes which hiss and spit. Colorful banners dance in the wind. Children and dogs dart to and fro. A glimpse of the pyramid shows through the wall of thents which house the makeshift shops.");

    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
        ({"snakes"}) : "A few seem domestic, many have been fried for lunch, and yet a few are wildly seeking escape, venomous too!",
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "east" : "/domains/urmil/room/shadow",
        "west" : "/domains/urmil/room/shop1",
        "south" : "/domains/urmil/room/shops4.c",
      ]) );

}
void init(){
    ::init();
}
