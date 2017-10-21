#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Fort");
    SetLong("A utility room in the ogre fort. Ogres are crude brutes relying on little more than strength to accomplish most tasks. The floor is littered with items they have discarded after breaking them while trying to determine a use.");
    SetItems(([
        ({ "junk", "broken stuff", "items", "broken items", "discarded items", "discards" }) : "Useless bits of junk not worthwile or working after the ogres have had them very long.",
      ]));
    SetExits( ([
        "east" : "/domains/woodland/room/g1",
        "north" : "/domains/woodland/room/g5.c",
      ]) );

}
void init(){
    ::init();
}
