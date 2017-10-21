#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A soutward trail climbs the dike toward a city gate. The trail follows the side of the dike west also. To the west is a large drainage pipe pumping out sewage.");
    SetExits( ([
        "south" : "/domains/northswamp/room/dam3",
        "west" : "/domains/northswamp/room/dam1.c",
      ]) );

}
void init(){
    ::init();
}
