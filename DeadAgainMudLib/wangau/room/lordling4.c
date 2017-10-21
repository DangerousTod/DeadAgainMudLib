#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of lordling3.c");
    SetLong("The grandstands of the noble, wealthy and bbrave are well appointed with seat backs, brass tacked upholstery, and drains here and there for spills. This most southern box is clearly for the richest. Peanut shells litter the aisles and plush lined shell of oak panels blocks most of the weather. Two grey and green pennons hang ominously low. The view of the tourney rink from here is quite good.");
    SetExits(([
        "north" : "/domains/wangau/room/lordling3",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
