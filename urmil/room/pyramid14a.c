#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A tiny prison cell hidden under the pyramid. If the door is closed you had better hope someone is coming to look for you.");
    SetInventory(([
        "/domains/urmil/obj/cup" : 1,
      ]));
    SetExits(([
        "east" : "/domains/urmil/room/pyramid14b",
      ]));

    SetDoor("east", "/domains/urmil/doors/cell_5.c");

}
void init(){
    ::init();
}
