#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of royal1.c");
    SetLong("Wangau cathedral arches upward heavenly. Knee benches cross the room from east to west. A narrow isle cuts to the southern point, beneath the apex where shafts of golden sunlight dazzle your eyes. Here the births, deaths, and unions of the greatest warriors, poets and nobles are celebrated. At the northern end of the cathedral are archways, east and west, to the wings. A single graceful spiral staircase leads up to the royal box  beneathe the belfry where the courtyard is in full view.");
    SetExits( ([
        "east" : "/domains/wangau/room/church2",
        "up" : "/domains/wangau/room/royal1",
        "west" : "/domains/wangau/room/church5.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
