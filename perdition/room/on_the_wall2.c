#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("On The Wall");
    SetLong("The wall rises up to the sky on jagged stones piled one atop of each other. You are at the height of High Bridge. The sides are too dangerous, you stay in the middle where the stones are not so smooth. They are sharp though.");
    SetItems( ([
      ]) );
	SetExits(([
		"slide" : "/domains/perdition/room/on_the_wall1",
		"scale" : "/domains/perdition/room/on_the_wall3",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
