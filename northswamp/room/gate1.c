#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Gate Of Urmil");
    SetLong("Urmil Roads ends at the gate of Urmil. Soldiers stand guard at the gate. The gate is a large heavy gate which seems to have to means for opening or closing it.");
    SetInventory(([
        "/domains/northswamp/npc/soldier" : 5,
      ]));
    SetExits( ([
        "east" : "/domains/northswamp/room/dike1",
        "west" : "/domains/northswamp/room/trail4",
	"south" : "/domains/urmil/room/n_gate2.c",
      ]) );
    SetDoor("south", "/domains/northswamp/doors/urmil_gate_n.c");

}
void init(){
    ::init();
}
