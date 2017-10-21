#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A dismal little prison cell. If the door is closed, you better hope you told someone where you would be!");
    SetInventory(([
        "/domains/urmil/npc/snake" : 1,
      ]));
    SetExits(([
        "west" : "/domains/urmil/room/pyramid17b",
      ]));
    SetDoor("west","/domains/urmil/doors/cell_2.c");

}
void init(){
    ::init();
}
