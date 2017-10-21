#include <lib.h>
//     notes for creator below
inherit LIB_DOOR;

static void create() {
    door::create();

	SetSide("northeast", ([ "id" : ({"gate","mighty gate","dwarved gate"}),
		"short" : "a mighty gate",
		"long" : "The might gate of the dwarven people. The gate is decorated with the face of a dwarf warrior glaring down. The gate is so massive it has its own tower and walk.",
		"lockable" : 0 ]) );

	SetSide("southwest", ([ "id" : ({"gate","great gate"}),
		"short" : "a mighty gate",
		"long" : "The great, mighty gate of the dwarven people.",
		"lockable" : 0 ]) );

	SetClosed(0);
    SetLocked(0);
//       a dwarf, any dwarf will blow a horn to signal the gate
//       keepers to close the gate. This is only a matter of using
//       say and tell room
//       vulture
//    SetKeys("DIR_X", ({ "DIR_X key" }));//
//    SetKeys("DIR_Y", ({ "DIR_Y key" }));
}

void init(){
    ::init();
}
