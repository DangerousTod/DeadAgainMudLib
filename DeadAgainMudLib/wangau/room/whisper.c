#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of common.c");
    SetLong("The rishest guests, elite, poets and even a painter or two often are treated to an evening in the war room after a tourney or celebration. The war room holds trophies of dozens of campaigns led by the royal family personally against men and beasts. Many of the trophies are of seized armor or bizzare finery, a few of the items are little more than grissly totems of war. A fine oak door leads north, west, and south.");
    SetExits(([
        "west" : "/domains/wangau/room/common",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
