#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of royal_ramp.c");
    SetLong("This is the grand royal box. The courtyard spreads out ina a spectacular vista. Seeing everything, not mention being seen by all, must be far more important than seeing any one thing. The rink is the hardest to observe from this sheltered vantage opint beneathe an open belfry. A rainbow of pennons ripple over the grandstands to the north. A half dozen mighty pennons, not a penny was spared billow to the left over the noble boxes. A horn is at hand for the calling of each round of the melee. There are few seats, the royal box is absolutely private. And those seats are voluminous, rich with thread , luster, and down. The royal box has a wind to the east and west. A staircase at the back of the box leads down to the church below.");
    SetExits( ([
        "east" : "/domains/wangau/room/royal2",
        "west" : "/domains/wangau/room/royal_ramp",
        "down" : "/domains/wangau/room/church1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
