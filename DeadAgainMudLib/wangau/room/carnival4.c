#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of carnival2.c");
    SetLong("A lively isle in the carnival whenever a tourney is held or a happy even is celebrated. An excellent view of the field can be had here. A selection of sweets, ales and breads, both free and for only a copper or two can be gotten here easily. The bold (or stupid) may enter the courtyard proper to the south which surrounds the melee tourney rink, connects to the muster and primarily serves as an outdoor auditorium for the master of the castle and family. To the west are the grandstands and various theaters, to the east is a busy isle where squires and lumpers work.");
    SetExits( ([
        "south" : "/domains/wangau/room/courtyard1",
        "east" : "/domains/wangau/room/carnival2",
        "west" : "/domains/wangau/room/grandstand1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
