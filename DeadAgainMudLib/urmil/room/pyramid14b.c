#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A row of prison cells below the pyramid. Could this be the secret of the priests? A cell door with a heavy wooden bolt is to the west.");
    SetInventory(([
        "/domains/urmil/obj/bolt5" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/pyramid15b",
        "west" : "/domains/urmil/room/pyramid14a",
        "north" : "/domains/urmil/room/pyramid13b.c",
      ]) );

    SetDoor("west", "/domains/urmil/doors/cell_5.c");

}
void init(){
    ::init();
}
