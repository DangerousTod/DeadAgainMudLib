#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A dismal little prison cell. What a horrible fate!");
    SetInventory(([
        "/domains/urmil/obj/bench" : 1,
      ]));
    SetExits(([
        "west" : "/domains/urmil/room/pyramid16b",
      ]));
    SetDoor("west","/domains/urmil/doors/cell_3.c");

}
void init(){
    ::init();
}
