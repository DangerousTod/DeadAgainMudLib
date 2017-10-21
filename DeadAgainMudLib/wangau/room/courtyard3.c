#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of courtyard2.c");
    SetLong("At the western end of the courtyard, to the north of the royal box is a ramp that leads up the boxes of the elite, noble, brilliant and any who risk his colors and life weilding live steel for glory.");
    SetExits( ([
        "south" : "/domains/wangau/room/courtyard4",
        "east" : "/domains/wangau/room/courtyard2",
        "southeast" : "/domains/wangau/room/courtyard5",
        "up" : "/domains/wangau/room/lordling1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
