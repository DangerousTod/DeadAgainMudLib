#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A row of prison cells below the pyramid. More than a few unlucky souls have been locked up here. To the west is a tiny prison cell complete with a cell door. The door has a thick wooden bolt.");
    SetInventory(([
        "/domains/urmil/obj/bolt6" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/pyramid19",
        "west" : "/domains/urmil/room/pyramid15a",
        "north" : "/domains/urmil/room/pyramid14b.c",
      ]) );
    SetDoor("west","/domains/urmil/doors/cell_6.c");

}
void init(){
    ::init();
}
