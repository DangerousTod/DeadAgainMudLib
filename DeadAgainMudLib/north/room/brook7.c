#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Stoney Brook");
    SetLong("Golden wheat and purple flowers cover miles of rolling hills.");
    SetExits( ([
        "southwest" : "/domains/north/room/lane3",
        "northeast" : "/domains/north/room/brook8.c",
      ]) );

}
void init(){
    ::init();
}
