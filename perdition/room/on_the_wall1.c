#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
   SetShort("Jagged Rocks");
    SetLong("You are taking some risks here. you can climb the North Wall, on top of the wall if you want to! The wall is wide and very tall.");

    SetExits(([
		"south" : "/domains/perdition/room/wall_street3",
		"scale" : "/domains/perdition/room/on_the_wall2",
        ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
