#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("West Lane");
    SetLong("Golden wheat and purple flowers cover miles of rolling hills.");
    SetExits( ([
        "east" : "/domains/north/room/lane1",
        "west" : "/domains/north/room/lane3.c",
      ]) );

}
void init(){
    ::init();
}
