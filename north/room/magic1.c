#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("%^GREEN%^Caves Of Horror%^RESET%^");
    SetLong("The pine forest rises onto rugged foothills. Fog never lifts, howling voices ring in the air.");
    SetExits( ([
        "south" : "/domains/north/room/nightf5",
        "west" : "/domains/north/room/caves1.c",
      ]) );

}
void init(){
    ::init();
}
