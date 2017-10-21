#include <lib.h>

inherit LIB_DUMMY;
inherit LIB_PULL;
inherit LIB_PRESS;

int openDoor(object who) {
	object door = load_object("/domains/urmil/doors/urmil_gate_s.c");
	if(!door->GetClosed()){
		write("The gate is already open.");
	}
	else {
		write("You open the gate.");
		say(this_player()->GetName()+" opens the gate.");
		tell_room("/domains/urmil/room/s_gate1.c","The gate opens.");
		tell_room("/domains/urmil/room/s_gate2.c","The gate opens.");
	door->SetClosed(0);
	}
	return 1;
}
int closeDoor(object who) {
	object door = load_object("/domains/urmil/doors/urmil_gate_s.c");
	if(door->GetClosed()){
		write("The gate is already closed.");
	}
	else {
		write("You close the gate.");
		say(this_player()->GetName()+" closes the gate.");
		tell_room("/domains/urmil/room/s_gate2.c","The gate closes.");
		tell_room("/domains/urmil/room/s_gate1.c","The gate closes.");
	door->SetClosed(1);
	}
	return 1;
}

static void create() {
	dummy::create();
	SetKeyName("lever");
	SetId(({"lever","gate lever"}));
	SetAdjectives("heavy");
	SetShort("gate lever");
	SetLong("PUll the lever to open the gate, press the lever to close.");
	SetPress((: closeDoor :));
	SetPull((: openDoor :));
}
