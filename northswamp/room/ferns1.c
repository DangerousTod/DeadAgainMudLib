#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("To the north and northwest are trails into heavy green coverage of ferns and grasses. To the south is a cauldron of swirling water. The noise here is almost deafening.");
    SetExits( ([
        "south" : "/domains/northswamp/room/sewer1",
        "northwest" : "/domains/northswamp/room/ferns3",
        "north" : "/domains/northswamp/room/ferns2.c",
      ]) );

}
void init(){
    ::init();
}
