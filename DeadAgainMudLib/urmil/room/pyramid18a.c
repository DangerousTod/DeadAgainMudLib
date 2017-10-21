#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A dismal little prison cell. Not the nicest but you can't beat the rates!");
    SetExits(([
        "west" : "/domains/urmil/room/pyramid18b",
      ]));
    SetDoor("west","/domains/urmil/doors/cell_1.c");

}
void init(){
    ::init();
}
