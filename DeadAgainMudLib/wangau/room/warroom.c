#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of goldroom.c");
   SetLong("The richest guests, elite, poets and even a painter or two often are treated to an evening in the war room after a tourney or a celebration. The war room holds trophies of dozens of campaigns led by the royal family personally against men and beasts. Many of the trophies are of seized armor or bizzare finery, a few of the items are little more than grissly totems of war. A fine oak door leads north, west and south.");
    SetExits( ([
        "south" : "/domains/wangau/room/goldroom",
        "west" : "/domains/wangau/room/redroom",
        "north" : "/domains/wangau/room/common.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
