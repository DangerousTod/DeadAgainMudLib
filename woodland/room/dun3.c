#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Dungeon");
    SetLong("The cruel ogres have wasted nothing on making their dungeon horrible and deadly for their prisoners.");
    SetInventory(([
        "/domains/woodland/obj/g_chest" : 1,
        "/domains/woodland/npc/ogre1" : 1,
      ]));
    SetExits(([
        "north" : "/domains/woodland/room/dun2",
      ]));

}
void init(){
    ::init();
}
