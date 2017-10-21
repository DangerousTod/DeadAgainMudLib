#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil City Guard Proving Ground");
    SetLong("This is the center of the city guard's proving grounds. Guardsmen train here routinely to hone their skills.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "northeast" : "/domains/urmil/room/drill1",
        "northwest" : "/domains/urmil/room/drill2",
        "southwest" : "/domains/urmil/room/drill5",
        "southeast" : "/domains/urmil/room/drill3.c",
      ]) );

}
void init(){
    ::init();
}
