#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Fort");
    SetLong("Hidden by the piles of ogre junk are chained up hungry wolves!");
    SetInventory(([
        "/domains/woodland/npc/wolf" : 8,
      ]));
    SetExits(([
        "west" : "/domains/woodland/room/g1",
      ]));

}
void init(){
    ::init();
}
