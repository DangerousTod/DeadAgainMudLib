#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("The water is deep here, so deep a dip would be tempting if not for the warm, green fuzzy skin.");
    SetExits( ([
        "north" : "/domains/northswamp/room/slop_room4",
        "northeast" : "/domains/northswamp/room/slop_room2",
        "southwest" : "/domains/northswamp/room/slop_room5.c",
      ]) );

}
void init(){
    ::init();
}
