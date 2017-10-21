#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of turret6.c");
    SetLong("The upper hall of the southern turret is a soldiers' ready room, a compliment to the assembly below.");

    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
        ({"snakes"}) : "A few seem domestic, many have been fried for lunch, and yet a few are wildly seeking escape, venomous too!",
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetInventory(([
        "/domains/urmil/weap/battleaxe" : 1,
        "/domains/urmil/obj/armor_bench" : 1,
        "/domains/urmil/npc/sergent" : 1,
        "/domains/urmil/weap/javelin" : 6,
        "/domains/urmil/obj/jerkybox" : 3,
        "/domains/urmil/obj/pool_table" : 1,
      ]));
    SetExits( ([
        "down" : "/domains/urmil/room/turret6",
        "up" : "/domains/urmil/room/wall1.c",
      ]) );

}
void init(){
    ::init();
}
