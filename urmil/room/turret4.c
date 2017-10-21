#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("West Turret");
    SetLong("The lower hall of the west turret. The accommodations are sparse but the soldiers don't seem to mind.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
      ]));
    SetInventory(([
        "/domains/urmil/obj/bench" : 2,
        "/domains/urmil/obj/trashcan" : 1,
        "/domains/urmil/obj/simple_chair" : 4,
      ]));
    SetExits( ([
        "east" : "/domains/urmil/room/drill2",
        "up" : "/domains/urmil/room/turret5.c",
      ]) );

}
void init(){
    ::init();
}
