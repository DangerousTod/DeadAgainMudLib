#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A small clump of clay and turf gripped by a network of intertwined roots. The water is stale, covered with slime which almost glows it is so green.");
    SetExits( ([
        "north" : "/domains/northswamp/room/slop_room1",
        "southwest" : "/domains/northswamp/room/slop_room3.c",
      ]) );

}
void init(){
    ::init();
}
