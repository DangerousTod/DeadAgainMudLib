#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Dwarven Mountain");
    SetLong("A broad stone road carved from the mountain. The surface is grooved to offer traction to those who climb up out of the mountain. Two deep cart tracks are cut through the grooves. The mountain above blots out all illumination. Voices can be heard in the dark depths.");
    SetInventory(([
        "/domains/north/npc/dwarf" : 4,
      ]));
    SetExits( ([
        "northeast" : "/domains/north/room/sbranch1",
        "southwest" : "/domains/north/room/sbranch3.c",
      ]) );

}
void init(){
    ::init();
}
