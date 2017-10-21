#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("Gnarled trees, grasses and thick ferns cover a dank fen in which the stench of years of accumulated garbage cooks.");
    SetInventory(([
        "/domains/northswamp/npc/swampdwarf" : 1,
      ]));
    SetExits( ([
        "north" : "/domains/northswamp/room/slop_room5",
        "southwest" : "/domains/northswamp/room/trash_room3.c",
      ]) );

}
void init(){
    ::init();
}
