#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(5);
    SetShort("copy of tomb9.c");
    SetLong("A tunnel chipped through the bedrock below the Night Fall Forest. A gleaming silver door is at the west end of the tunnel.");
    SetExits( ([
        "west" : "/domains/north/room/tomb9",
        "east" : "/domains/north/room/spider2.c",
      ]) );
	SetDoor("west","/domains/north/doors/spider_gate.c");

}
void init(){
    ::init();
}
