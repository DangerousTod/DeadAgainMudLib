#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A trail follows the curving side of a steep dike to the east. Another trail descends the side of the dike to the north. To the north is a dense jungle, vibrant with life.");
    SetExits( ([
        "north" : "/domains/northswamp/room/trail1",
        "east" : "/domains/northswamp/room/trail3.c",
      ]) );

}
void init(){
    ::init();
}
