#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of cave6.c");
    SetLong("The pine forest rises onto rugged foothills. Fog never lifts, howling voices ring in the air.");
    SetExits( ([
        "northwest" : "/domains/north/room/cave6",
        "south" : "/domains/north/room/cave2.c",
      ]) );

    SetInventory(([
        "/domains/north/npc/wolf" : 3,
      ]));

}
void init(){
    ::init();
}
