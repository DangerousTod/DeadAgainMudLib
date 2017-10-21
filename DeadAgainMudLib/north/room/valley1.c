#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Caves of Horror");
    SetLong("A valley is to the north. The hills are split open open as if ripped apart at a seam. Exposed bedrock provides handholds to assist in climbing into or out of the valley. Trees, now dry and dead, lay scattered at the southern end of the valley.");
    SetExits( ([
        "southeast" : "/domains/north/room/cave5",
        "north" : "/domains/north/room/valley2.c",
      ]) );

}
void init(){
    ::init();
}
