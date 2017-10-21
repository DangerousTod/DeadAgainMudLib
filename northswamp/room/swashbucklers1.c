#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("Broken pottery, broken glass, scattered clothing and hanging socks decorate this hidden copse in the jungle. Ruffians, pirates by the look of them, lounge here drinking and laughing.");
    SetInventory(([
        "/domains/northswamp/npc/swashbuckler" : 5,
      ]));
    SetExits( ([
        "south" : "/domains/northswamp/room/ferns4",
        "southwest" : "/domains/northswamp/room/swashbucklers2.c",
      ]) );

}
void init(){
    ::init();
}
