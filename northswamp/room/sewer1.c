#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("Brackish water cyclones into a wide hole. The hole, possibly man made is easily too wide for even a horse to jump across. The swamp water boils with pale green floss.");
    SetExits( ([
        "south" : "/domains/northswamp/room/drainpipe1",
        "north" : "/domains/northswamp/room/ferns1",
        "northeast" : "/domains/northswamp/room/trash_room1",
        "west" : "/domains/northswamp/room/newbie11.c",
      ]) );

}
void init(){
    ::init();
}
