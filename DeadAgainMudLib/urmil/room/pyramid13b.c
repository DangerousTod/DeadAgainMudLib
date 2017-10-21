#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A row of prison cells below the pyramid. To the north is the guard post. It appears unoccupied. To the west is a cell door with a heavy wooden bolt.");
    SetInventory(([
        "/domains/urmil/obj/bolt4" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/pyramid14b",
        "west" : "/domains/urmil/room/pyramid13a",
        "north" : "/domains/urmil/room/pyramid11.c",
      ]) );
    SetDoor("west","/domains/urmil/doors/pyramid13b.c");

}
void init(){
    ::init();
}
