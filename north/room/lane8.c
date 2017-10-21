#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of lane5.c");
    SetLong("Stone steps lead up to a granite headland. To the east lays a wheat field stretching to the horizon.");
    SetExits(([
      ]));

}
void init(){
    ::init();
}
