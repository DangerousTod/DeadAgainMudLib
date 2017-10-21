#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("The ferns and evergreens block this clearing of from any sound or breeze. Light even takes on a greenish tint. Bits of bone are scattered about. The mud is deeply trodden.");
    SetItems(([
        ({ "bone", "bits of bone", "bone scattered about", "bits of bone scattered about" }) : "The bits of bone are large, many of them, splintered pieces of white bone. Among the smaller bits are teeth, human from the look of them.",
      ]));
    SetExits( ([
        "east" : "/domains/northswamp/room/mud1.c",
      ]) );
    SetInventory(([
        "/domains/northswamp/npc/swamptroll" : 2,
      ]));

}
void init(){
    ::init();
}
