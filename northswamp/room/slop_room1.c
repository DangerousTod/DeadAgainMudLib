#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("Knee high mirky water under a thick layer of brilliant green algea churns gently. Knotty trees rise from the slime, roots tangled together underfoot.");
    SetInventory(([
        "/domains/northswamp/npc/swashbuckler" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/northswamp/room/slop_room2",
        "northwest" : "/domains/northswamp/room/slop_room4.c",
      ]) );
}
void init(){
    ::init();
}
