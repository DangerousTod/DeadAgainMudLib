#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A circular bore in the huge stone slabs below the pyramid. Footholds cut into the surface of the stone lead to chamber above. The floor is loose earth. to the west is a corridor.");
    SetItems(([
        ({ "bore", "hole", "well", "stones" }) : "The cirular well, bored through solid stone, is streaked with scratch marks. Scratches left behind by unfortunates who failed to climb back up. Strange, there are no remains here.",
      ]));
    SetExits( ([
        "west" : "/domains/urmil/room/pyramid22",
        "up" : "/domains/urmil/room/pyramid20.c",
      ]) );

}
void init(){
    ::init();
}
