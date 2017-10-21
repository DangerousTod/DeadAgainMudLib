#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil City Guard Proving Ground");
    SetLong("A stone tiled square with a low wall. The city guard drills here. To the east is the north gate. The proving gound extends to the west and south.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/drill3",
        "east" : "/domains/urmil/room/n_gate2",
        "west" : "/domains/urmil/room/drill2",
        "southwest" : "/domains/urmil/room/drill4.c",
      ]) );

}
void init(){
    ::init();
}
