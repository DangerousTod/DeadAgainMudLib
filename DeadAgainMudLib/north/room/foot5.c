#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Leather Foot Road");
    SetLong("The tallest trees of the forest stand here where the creepers flower. Birds of prey sweep through the empty space of the forest canopy. Blue moss climbs the wide trunks.");
    SetExits( ([
        "southeast" : "/domains/north/room/foot4",
        "northwest" : "/domains/north/room/foot6.c",
      ]) );

}
void init(){
    ::init();
}
