#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of church3.c");
    SetLong("This is the kitchen space of the staff of the cathedral. The pantry is always full as the royal family provides well for the caretakers of the cathedral. A tiny pass-thru near a bread rack shows that the priests are generous with their benefactor's kindness. A path picks through prickly bushes to the pass-thru from the outside of the castle, clearly in defiance of the restrictions on the area-that the needy may have a bit of bread or soup.");
    SetExits(([
        "west" : "/domains/wangau/room/church3",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
