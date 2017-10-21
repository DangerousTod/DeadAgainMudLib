#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("copy of slop_room5.c");
    SetLong("Slimy swamp is all around.");
    SetExits( ([
        "southeast" : "/domains/northswamp/room/slop_room5.c",
      ]) );
    SetInventory(([
        "/domains/northswamp/npc/swamptroll" : 1,
      ]));

}
void init(){
    ::init();
}
