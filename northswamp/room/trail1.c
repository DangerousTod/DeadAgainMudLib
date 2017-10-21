#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A steep dike under the walls of a town or city. A trail climbs to the south, in the direction of a city gate. Another trail follows the side of the dike to the east, above a jungle.");
    SetInventory(([
        "/domains/northswamp/npc/swamporc" : 2,
      ]));
    SetExits( ([
        "east" : "/domains/northswamp/room/dam1",
        "northeast" : "/domains/northswamp/room/drainpipe1",
        "south" : "/domains/northswamp/room/trail2.c",
      ]) );

}
void init(){
    ::init();
}
