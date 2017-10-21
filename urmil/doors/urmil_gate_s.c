/*    /domains/Examples/etc/door.c
 *    from the Dead Souls LPC Library
 *    an example door object connecting doorroom1.c and doorroom2.c
 *    created by Descartes of Borg 950411
*	   modified by Vulture for Urmil City on DeadAgain.
 *   the gate is now operated nearby from a gatehouse
 */

#include <lib.h>

inherit LIB_DOOR;
//inherit "/lib/events/close";

static void create() {
    door::create();
	SetSide("south",([ "id" : ({"gate","city gate","South Gate"}),
		"short" : "Urmil City Gate",
		"long" : "A heavy gate of iron and wood.",
		"lockable" : 0 ]) );
	SetSide("north",([ "id" : ({"gate","city gate","Urmil Gate"}),
		"short" : "North City Gate",
		"long" : "This gate protects the citizens of Urmil.",
		"lockable" : 0 ]) );
	SetClosed(0);
}
varargs int eventOpen(object who, object tool) {
	if(!this_object()->GetClosed()){
		write("It is open.");
	}
	else {
		write("You cannot open the gate here.");
	}
	return 1;
}
varargs int eventClose(object who) {
	if(this_object()->GetClosed()){
		write("It is closed.");
	}
	else {
		write("You cannot close the gate from here.");
	}
	return 1;
}

