#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Fort");
    SetLong("This is the kitchen of the ogre fort. A chopping table and pantry stands at the west wall. A trap door to a cellar or storage area is in the floor. There is a door to the south.");
    SetItems(([
        "pantry" : "Various jars and sacks of things only an ogre would find edible.",
        "sacks" : "In the sacks are the remains of recent potatoe harvests, lint, gravel and bitters nuts such as acorn or pine.",
        "chopping board" : "It is a normal butchers' block besides being giant sized and having shackle rings at either end.",
        "extremities" : "Pickles hands and feet, probably human. Also in the jars are several hooves and donkey noses. You did ask.",
        "jars" : "Pickled extremities for the most part.",
      ]));
    SetInventory(([
        "/domains/woodland/npc/ogre1" : 2,
      ]));
    SetExits( ([
        "south" : "/domains/woodland/room/g5",
        "down" : "/domains/woodland/room/dun1.c",
      ]) );

}
void init(){
    ::init();
}
