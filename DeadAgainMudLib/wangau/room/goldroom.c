#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of penitent_hall.c");
    SetLong("This is the luxurious gold room. It is large enough to accomodate several dozen guests. Food and drink are free to any noble or genius who graces a celebration or tourney. Fine oak doors lead north, south and west.");
    SetExits( ([
        "south" : "/domains/wangau/room/blueroom",
        "west" : "/domains/wangau/room/penitent_hall",
        "north" : "/domains/wangau/room/warroom.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
