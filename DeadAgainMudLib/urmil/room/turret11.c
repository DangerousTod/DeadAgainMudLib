#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of turret12.c");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetInventory(([
        "/domains/urmil/obj/bench" : 2,
        "/domains/urmil/npc/sergent" : 3,
        "/domains/urmil/npc/colonel" : 1,
        "/domains/urmil/obj/simple_chair" : 4,
      ]));
    SetExits( ([
        "up" : "/domains/urmil/room/turret12",
        "down" : "/domains/urmil/room/storehouse.c",
      ]) );

}
void init(){
    ::init();
}
