#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of penitent_hall.c");
    SetLong("A gala hall for visitors who may eat, sleep or visit if they desire. Such priviledge is for the wealthy of course. The room is decorated is ivory and gold. A fine oak door leads to the north and to the east.");
    SetExits( ([
        "north" : "/domains/wangau/room/penitent_hall",
        "east" : "/domains/wangau/room/blueroom.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
