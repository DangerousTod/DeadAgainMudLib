#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A tiny prison cell hidden under the pyramid. If the door is close you had better hope someone will come look for you.");
    SetInventory(([
        "/domains/urmil/obj/bench" : 1,
      ]));
    SetExits(([
        "east" : "/domains/urmil/room/pyramid15b",
      ]));
	SetDoor("east","/domains/urmil/doors/cell_6.c");

}
void init(){
    ::init();
}
