#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of warroom.c");
    SetLong("The receiving room of the commons is a grand affair in itself. It is large enough to hold a tourney. Heavy enough to withstand a seige. Staffed with countless scurrying waiters whenever there is anyone who is anyone present. And under a roof that could accomodate a cloud. A square door leads to the east and vaulted hall leads to the west.");
    SetExits( ([
        "south" : "/domains/wangau/room/warroom",
        "east" : "/domains/wangau/room/whisper1",
        "west" : "/domains/wangau/room/grandisle.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
