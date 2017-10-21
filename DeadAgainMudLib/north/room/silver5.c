#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("The Great Library");
    SetLong("The Great Library");
    SetExits( ([
        "west" : "/domains/north/room/silver4",
        "east" : "/domains/north/room/library1.c",
      ]) );

}
void init(){
    ::init();
}
