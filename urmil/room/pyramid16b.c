#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramide");
    SetLong("A row of prison cells below the pyramid. They look inescapable. There is a door to the east with a heavy locking bolt. To the south are more prison cell doors.");
    SetInventory(([
        "/domains/urmil/obj/bolt3" : 1,
      ]));
    SetExits( ([
        "north" : "/domains/urmil/room/pyramid12",
        "east" : "/domains/urmil/room/pyramid16a",
        "south" : "/domains/urmil/room/pyramid17b.c",
      ]) );
    SetDoor("east","/domains/urmil/doors/cell_3.c");

}
void init(){
    ::init();
}
