#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A man made cave, loosely stacked stones are the walls of a primitive room. Water drips somewhere making the floor muddy.");
    SetItems(([
        ({ "ceiling", "roof", "dome", "eaves", "up" }) : "The carelessly stacked stones do in part hold a dome aloft above your head. The stones are packed with plaster and balanced over thick marble butresses.",
        ({ "marble", "butresses", "carvings", "carved marble" }) : "Each marble butress must support hundreds of tons of earth and stone. On each of the eight is a motif similar to that at the entrance of the pyramid. A warrior in a feathered mask, perhaps a hood or ever a man with the head of a fish slaughters a flying serpent.",
        ({ "loose stones", "rough stones", "stones", "rocks" }) : "The walls seem shoddy, poorly built as if the stones could be pulled free. There is no mortar and very little sense to the placement of the stones. It is har to believe the place could stand on a foundation like this.",
        ({ "mud", "floor", "pool", "pools", "mud puddles", "ground", "footing" }) : "Water leaks in from somewhere, the place sits beside of swamp of course. The mud though is a bit thick and red to just be mud.",
      ]));
    SetInventory(([
        "/domains/urmil/obj/p_chest" : 1,
        "/domains/urmil/obj/cask" : 2,
        "/domains/urmil/weap/dagger" : 2,
        "/domains/urmil/npc/monster_troll" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/pyramid22.c",
      ]) );

}
void init(){
    ::init();
}
