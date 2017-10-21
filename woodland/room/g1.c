#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Fort");
    SetLong("The entry courtyard of the ogre fort. A thick walled building, like a fot within a fort, is to the north behind an iron strapped door. Heaps of ogre junk are to the east and west.");
    SetInventory(([
        "/domains/woodland/npc/ogre1" : 2,
      ]));
    SetExits( ([
        "south" : "/domains/woodland/room/g_gate",
        "east" : "/domains/woodland/room/g2",
        "west" : "/domains/woodland/room/g3",
        "north" : "/domains/woodland/room/g4.c",
      ]) );

}
void init(){
    ::init();
}
