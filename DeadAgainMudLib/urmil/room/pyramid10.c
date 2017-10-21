#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("On the wall is a mural. It blasts your sanity. To the east an west are corridors thick with dust choked air. Breathing is difficult here. The air is as still as a tomb but far from so quiet. Distant howls never cease. A wooden ramp leads up.");
    SetItems(([
        ({ "mural", "painting", "wall", "," }) : "An uncarved wall befouled with an image of a leering ogre.",
        ({ "ceiling", "up", "beams", "rafters" }) : "High above, twenty feet perhaps are thick tarred roof beams.",
        ({ "floor", "ramp", "wood" }) : "Worn wooden planks.",
      ]));
    SetInventory(([
        "/domains/urmil/npc/spider" : 4,
      ]));
    SetExits( ([
        "east" : "/domains/urmil/room/pyramid11",
        "west" : "/domains/urmil/room/pyramid12",
        "up" : "/domains/urmil/room/pyramid9.c",
      ]) );

}
void init(){
    ::init();
}
