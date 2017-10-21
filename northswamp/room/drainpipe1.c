#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A drainage pipe sticks out of a long dike. Sewage spills from the pipe southward to a swirling cauldron of waste water surrounded by jungle. To the southwest is a trail climbing the side of a steep dike.");
    SetInventory(([
        "/domains/northswamp/npc/swamporc" : 2,
        "/domains/northswamp/armor/chainmail" : 2,
        "/domains/northswamp/weap/hammer" : 1,
        "/domains/cave/obj/garbage" : 2,
        "/domains/northswamp/armor/shield" : 1,
      ]));
    SetExits( ([
        "north" : "/domains/northswamp/room/sewer1",
        "southwest" : "/domains/northswamp/room/trail1.c",
      ]) );

}
void init(){
    ::init();
}
