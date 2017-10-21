#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Leather Foot Road");
    SetLong("A road through a thick forest. If not for the dozens of boulders scattered about the trees would stand too thick for all but the most nimble. Red orange moss clings to every surface. Creepers hang thick from the trees.");
    SetItems(([
        ({ "boulders", "rocks" }) : "The largest of the boulders stand in a grouping setting their faces too high for the encrouching moss. The broad face of a king looks to the west. On the north face of the grouping is a stone fully carved into an enourmous feather.",
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/foot2",
        "northwest" : "/domains/north/room/foot4.c",
      ]) );

}
void init(){
    ::init();
}
