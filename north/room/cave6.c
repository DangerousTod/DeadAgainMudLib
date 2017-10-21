#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of cave4.c");
    SetLong("The pine forest rises onto rugged foothills. Fog never lifts, howling voices ring in the air.");
    SetExits( ([
        "east" : "/domains/north/room/cave4",
        "southeast" : "/domains/north/room/cave7.c",
      ]) );
    SetInventory(([
        "/domains/north/npc/wolf" : 3,
      ]));

}
void init(){
    ::init();
}
