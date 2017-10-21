#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Feasting Hall");
    SetLong("The feasting hall of the Ogre Chief has a huge table loaded with partially cooked and mostly dead things to eat. Mighty rafters are hung with torn tokens of the glory of knights and wizards. A fire roars in a sunken fireplace in the northeast corner of the hall.");
    SetInventory(([
        "/domains/woodland/npc/ogre2" : 5,
        "/domains/woodland/npc/1_ogre" : 1,
        "/domains/woodland/npc/wolf" : 3,
      ]));
    SetExits( ([
        "south" : "/domains/woodland/room/g1",
        "west" : "/domains/woodland/room/g5.c",
      ]) );

}
void init(){
    ::init();
}
