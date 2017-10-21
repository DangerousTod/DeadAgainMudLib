#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("copy of gate1.c");
    SetLong("Brackish water cyclones into a wide hole. The hole, possibly man made is easily too wide for even a horse to jump across. The swamp water boils with pale green floss.");
    SetExits(([
        "north" : "/domains/northswamp/room/gate1",
      ]));
	SetDoor("north", "/domains/northswamp/doors/urmil_gate_n.c");

}
void init(){
    ::init();
}
