#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Mangrove Swamp");
    SetLong("Mangrove trees dominate the swamp. The water creeps slowly westward, spilling over rocks and snags. Some kind of natural levee of sponge and moss is to the northeast where thick ferns grow.");
    SetExits(([
        "west" : "/domains/northswamp/room/mangrove2",
        "northeast" : "/domains/perdition/room/slop_room8.c",
      ]));

}
void init(){
    ::init();
}
