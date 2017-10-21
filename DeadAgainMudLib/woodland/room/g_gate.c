#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("%^GREEN%^Ogre Fortress%^RESET%^");
    SetLong("A massive lime plastered palisade far beyond human proportions.");
    SetInventory(([
        "/domains/woodland/npc/wolf" : 3,
      ]));
    SetExits( ([
        "southwest" : "/domains/woodland/room/aspen16",
        "north" : "/domains/woodland/room/g1.c",
      ]) );

}
void init(){
    ::init();
}
