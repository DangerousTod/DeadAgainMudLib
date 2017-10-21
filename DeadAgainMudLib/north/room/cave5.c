#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of cave4.c");
    SetLong("The pine forest rises onto rugged foothills. Fog never lifts, howling voices ring in the air.");
    SetExits( ([
        "south" : "/domains/north/room/cave4",
        "northwest" : "/domains/north/room/valley1.c",
      ]) );

}
void init(){
    ::init();
}
