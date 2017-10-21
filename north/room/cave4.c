#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of cave3.c");
    SetLong("The pine forest rises onto rugged foothills. Fog never lifts, howling voices ring in the air.");
    SetExits( ([
        "north" : "/domains/north/room/cave5",
        "southeast" : "/domains/north/room/cave3",
        "west" : "/domains/north/room/cave6.c",
      ]) );

}
void init(){
    ::init();
}
