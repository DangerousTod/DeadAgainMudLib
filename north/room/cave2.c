#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of caves1.c");
    SetLong("The pine forest rises onto rugged foothills. Fog never lifts, howling voices ring in the air.");
    SetExits( ([
        "southwest" : "/domains/north/room/caves1",
        "north" : "/domains/north/room/cave7.c",
      ]) );

}
void init(){
    ::init();
}
