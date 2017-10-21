#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Nort Swamp");
    SetLong("From this perch on the side of a steep dike you can see where a huge brown funnel of swirling wastewater drops into a giant grate in the midst of a steaming jungle. A city is below that jungle, legends say. South, up the side of the dike, leads to the walls of a city. West, along the side of the dike, leads to the steep path down to the jungle.");
    SetExits( ([
        "west" : "/domains/northswamp/room/trail2",
        "south" : "/domains/northswamp/room/trail4.c",
      ]) );

}
void init(){
    ::init();
}
