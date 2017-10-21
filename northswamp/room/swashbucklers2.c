#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A camp is laid out here where a slight breeze cuts through the dense evergreen canopy. Blankets are laid out near a fire pit. Two large crates filled with dry goods and cooking utensils stand above a pile of refuse.");
    SetItems(([
        ({ "crate", "crates", "large crates", "large crate refuse", "large crate", "refuse", "fire pit", "dry goods" }) : "The traveling kitchen and oven of vagabonds. What is not very heavy is either rotten or near empty.",
      ]));
    SetExits( ([
        "southeast" : "/domains/northswamp/room/ferns4",
        "northeast" : "/domains/northswamp/room/swashbucklers1.c",
      ]) );

}
void init(){
    ::init();
}
