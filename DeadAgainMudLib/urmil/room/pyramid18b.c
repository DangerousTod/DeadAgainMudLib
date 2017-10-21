#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A row of prison cells below the pyramids. a door with a heavy bolt is to the east. To the south might be the glimmer of gold!");
    SetInventory(([
        "/domains/urmil/obj/bolt1" : 1,
      ]));
    SetExits( ([
        "north" : "/domains/urmil/room/pyramid17b",
        "east" : "/domains/urmil/room/pyramid18a",
        "south" : "/domains/urmil/room/treasure.c",
      ]) );
    SetDoor("east","/domains/urmil/doors/cell_1.c");

}
void init(){
    ::init();
}
