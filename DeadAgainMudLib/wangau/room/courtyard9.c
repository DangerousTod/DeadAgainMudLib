#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of courtyard8.c");
    SetLong("Standing below the royal box the velvet cushions of the master and his family shine as you gaze up, the churchbells appear to be made of solid gold and seem to ring even motionless. The grandstands are to the north and the tourney rink is to the east.A ramp leads up to the royal box.");
    SetExits( ([
        "north" : "/domains/wangau/room/courtyard4",
        "east" : "/domains/wangau/room/courtyard8",
        "up" : "/domains/wangau/room/royal_ramp",
        "northeast" : "/domains/wangau/room/courtyard5.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
