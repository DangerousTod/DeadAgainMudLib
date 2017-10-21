#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("The south face of a foothill below Wolff Mountain. Thick smoke drifts from near the summit. Trees are marked and the ground has been trampled.");
    SetItems(([
        ({ "marked trees", "trampled ground", "markes", "ground" }) : "Hunters are at work here, but the tracks are far too large to be left by men.",
      ]));
    SetExits( ([
        "west" : "/domains/woodland/room/aspen1",
        "east" : "/domains/woodland/room/aspen4.c",
      ]) );

}
void init(){
    ::init();
}
