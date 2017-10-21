#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil City Guard Proving Ground");
    SetLong("The proving grounds of the city guard. This is a stone tiled square marked with boot scuffs and more than a few patches of reddish stain. To the south is an outdoor bazaar.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "north" : "/domains/urmil/room/drill2",
        "east" : "/domains/urmil/room/drill3",
        "northeast" : "/domains/urmil/room/drill4",
	"south" : "/domains/urmil/room/shop1.c",
      ]) );

}
void init(){
    ::init();
}
