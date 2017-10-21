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
        "northeast" : "/domains/north/room/lane3",
        "southwest" : "/domains/north/room/brook5.c",
      ]) );

}
void init(){
    ::init();
}
