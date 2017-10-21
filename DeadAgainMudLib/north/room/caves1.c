#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Caves of Horror");
    SetLong("The pine forest rises onto rugged foothills. Fog never lifts, howling voices ring in the air.");
    SetExits( ([
        "east" : "/domains/north/room/magic1",
        "northeast" : "/domains/north/room/cave2",
        "northwest" : "/domains/north/room/cave3.c",
      ]) );

}
void init(){
    ::init();
}
