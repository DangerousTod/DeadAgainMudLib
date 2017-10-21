#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("West Lane");
    SetLong("The hills are now and then furrowed north to south, markings show property lines. The lines are old though, the walls are bitten by white lichen. They are more tumbled than standing.");
    SetInventory(([
        "/domains/north/npc/orc" : 2,
      ]));
    SetExits( ([
        "east" : "/domains/north/room/land4",
        "west" : "/domains/north/room/lane6.c",
      ]) );

}
void init(){
    ::init();
}
