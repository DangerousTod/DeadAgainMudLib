#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of grandstand3.c");
    SetLong("A boxing hall complete with sacks of sand for a ring and large wooden pells for mauling with hands, feet or even teeth. A crude drawing on one wall honors the local champion and his top competitors. In the hours before a melee this place will become packed with men and women, half naked, mostly toothless, and ready to start punching.");
    SetExits(([
        "south" : "/domains/wangau/room/grandstand3",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
