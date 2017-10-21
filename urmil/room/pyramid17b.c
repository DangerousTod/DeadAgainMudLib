#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A row of prison cells below the pyramid. to the east is a tiny prison cell with a heavy wooden bolt on the door. What a sad fate.");
    SetInventory(([
        "/domains/urmil/obj/bolt2" : 1,
      ]));
    SetExits( ([
        "north" : "/domains/urmil/room/pyramid16b",
        "east" : "/domains/urmil/room/pyramid17a",
        "south" : "/domains/urmil/room/pyramid18b.c",
      ]) );
    SetDoor("east","/domains/urmil/doors/cell_2.c");

}
void init(){
    ::init();
}
