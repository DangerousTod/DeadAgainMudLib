#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("West Lane");
    SetLong("Stone steps lead up to a granite headland. To the east lays a wheat field stretching to the horizon.");
    SetExits( ([
        "east" : "/domains/north/room/lane5",
        "up" : "/domains/north/room/point1.c",
      ]) );

}
void init(){
    ::init();
}
