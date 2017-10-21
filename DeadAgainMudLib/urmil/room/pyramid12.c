#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A gloomy dangerous corridor under the pyramid. The priests are hiding something. Surely it is the priests that the watchmen fear. Can the answer be in these halls?");
    SetExits( ([
        "east" : "/domains/urmil/room/pyramid10",
        "south" : "/domains/urmil/room/pyramid16b.c",
      ]) );

}
void init(){
    ::init();
}
