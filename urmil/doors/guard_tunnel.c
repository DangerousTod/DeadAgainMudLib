#include <lib.h>

inherit LIB_DOOR;

static void create() {
    door::create();

	SetSide("down", (["id" : ({ "door","steel door" }),
		"short" : "a steel door in the floor",
		"long" : "This steel door lifts up.",
		"lockable" : 1 ]) );
	SetSide("up", (["id" : ({ "door","steel door" }),
		"short" : "a steel door",
		"long" : "The ramp ends against a steel door in the ceiling.",
		"lockable" : 1 ]) );
	SetKeys("down", ({"guard key"}) );
	SetKeys("up", ({"guard key"}) );
    SetClosed(1);
    SetLocked(1);
}

void init(){
    ::init();
}
