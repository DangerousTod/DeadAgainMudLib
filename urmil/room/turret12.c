#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Above the southern silo");
    SetLong("To the north is a walkway on the East Wall, the same walkway bridges the southern turret and silo over the southern gate. Below is a large storage silo. The view is incredible.");
    SetItems(([
        ({ "view", "look" }) : "ast, south, or the city?",
        ({ "view city", "look city" }) : "The city is strangely large viewed from above. The district known as The Maze thrums (and stinks) with life below, the ever present fires gutter within the temple at the apex of the pyramid. The bazaar is lost beyond the constant activity at the horsemarket and southern gate.",
        ({ "silo", "down" }) : "There is no peering into the silo, you would have to go down. The silo itself is interesting. The stones don't quite match the stones of the walls or southern gate. The stones do, however, match the pyramid.",
        ({ "view south", "look south" }) : "A forest is to the south, everyone knows that, but something is in the way, something hard to see clearly-it could just be the wind casting dust from the east.",
        ({ "view east", "look east" }) : "Urmil Road crosses a painted desert, rises into distant mountains.",
      ]));

    SetExits( ([
        "down" : "/domains/urmil/room/turret11",
        "west" : "/domains/urmil/room/wall4",
        "north" : "/domains/urmil/room/wall5.c",
      ]) );

}
void init(){
    ::init();
}
