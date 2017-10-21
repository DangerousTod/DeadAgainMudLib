#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of silver5.c");
    SetLong("The Silver Trail");
    SetExits(([
        "west" : "/domains/north/room/silver5",
      ]));

}
void init(){
    ::init();
}
