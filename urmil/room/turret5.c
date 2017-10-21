#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of turret4.c");
    SetLong("The upper hall of the west turret. The upper hall differs very little from the lower hall. It does have windows.");
    SetItems(([
        ({ "guards", "soldiers" }) : "Rough looking gentlement, well equiped and highly aware.",
        ({ "look", "window", "view" }) : "A vast jungle stretches to the northern horizon. Miles of dry sand are to the west. Storms boil over a distant sea beyond the sand, beyond the western desert.",
      ]));
    SetInventory(([
        "/domains/campus/obj/simple_chair" : 5,
        "/domains/urmil/npc/soldier" : 2,
        "/domains/campus/obj/trashcan" : 1,
        "/domains/campus/obj/bench" : 2,
      ]));
    SetExits(([
        "down" : "/domains/urmil/room/turret4",
      ]));

}
void init(){
    ::init();
}
