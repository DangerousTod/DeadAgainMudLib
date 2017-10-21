#include <lib.h>

inherit LIB_DOOR;

static void create() {
    door::create();

	SetSide("west",(["id" : ({ "door" }),
		"short" : "cell door four",
		"long" : "A heavy prison cell door with a thick wooden bolt.",
		"lockable" : 1 ]) );

	SetSide("east", (["id" : ({ "door" }),
		"short" : "a cell door",
		"long" : "This is cell door from the wrong side!",
		"lockable" : 1 ]) );

	SetClosed(0);
	SetLocked(0);

}
void init(){
    ::init();
}
