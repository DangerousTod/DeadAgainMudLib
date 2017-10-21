#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil City Guard Proving Ground");
    SetLong("The southeast corner of the proving grounds. Urmil's city guard learns from the best.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetInventory(([
        "/domains/urmil/npc/boris" : 1,
      ]));
    SetExits( ([
        "north" : "/domains/urmil/room/drill1",
        "west" : "/domains/urmil/room/drill5",
        "northwest" : "/domains/urmil/room/drill4.c",
      ]) );

}
void init(){
    ::init();
}
