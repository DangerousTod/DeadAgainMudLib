#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Stone Heart's Corner");
    SetLong("A crossroad in a circle of standing stones. A steep climb through thorny old trees and their fallen brothers suggests the end of Leather Foot Road to the northwest. West Lane cuts through an open grassland to the west. Waves roll across the golden grasses like swells on the ocean.");
    SetExits( ([
        "southeast" : "/domains/north/room/foot8",
        "west" : "/domains/north/room/lane1",
        "northwest" : "/domains/north/room/foot10.c",
      ]) );

}
void init(){
    ::init();
}
