#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("The end of a prison hallway below the pyramid. Could this have been the secret of the priests, a prison with doors that have no key?");
    SetInventory(([
        "/domains/urmil/npc/snake" : 2,
        "/domains/northswamp/obj/bushel" : 1,
      ]));
    SetExits( ([
        "down" : "/domains/urmil/room/pyramid20",
        "north" : "/domains/urmil/room/pyramid15b.c",
      ]) );

}
void init(){
    ::init();
}
