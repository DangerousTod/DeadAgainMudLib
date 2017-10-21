#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of foot7.c");
    SetLong("Through a brick arch is a crossroad to the northwest. On the back of a sunken mountain is a deep wood willed with multitudes of birds in stunning hues to the southeast.");
    SetInventory(([
        "/domains/north/npc/spider" : 2,
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/foot7",
        "northwest" : "/domains/north/room/foot9.c",
      ]) );

}
void init(){
    ::init();
}
