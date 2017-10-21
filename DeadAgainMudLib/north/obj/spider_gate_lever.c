#include <lib.h>

inherit LIB_DUMMY;
inherit LIB_PULL;
inherit LIB_PRESS;

int openDoor(string array) {
object door1 = load_object("/domains/north/doors/arachnid_gate.c");
object door2 = load_object("/domains/north/doors/spider_gate.c");
	if(door2->GetClosed(1)){
		write("The gate is already open.");
	}
	else {
		write("You open the gate.");
		say(this_player()->GetName()+" opens the gate.");
		tell_room("/domains/north/room/vault.c","The Spider Gate opens,");
		tell_room("/domains/north/room/spider2.c","The spider gate opens.");
		tell_room("/domains/north/room/tomb9.c","The Spider Gate closes.");
		tell_room("/domains/north/room/spider1.c","The Spider Gate closes.");
	}
	door1->SetClosed(0);
	door2->SetClosed(1);
	return 1;
}
int closeDoor(string array) {
	object door1 = load_object("/domains/north/doors/arachnid_gate.c");
	object door2 = load_object("/domains/north/doors/spider_gate.c");
	if(door2->GetClosed(0)){
		write("The gate is already closed.");
	}
	else {
		write("You close the gate.");
		say(this_player()->GetName()+" closes the gate.");
		tell_room("/domains/north/room/spider2.c","The gate closes.");
		tell_room("/domains/north/room/vault.c","The Spider Gate closes.");
		tell_room("/domains/north/room/tomb9.c","The Spider Gate opens.");
		tell_room("/domains/north/room/spider1.c","The Spider Gate opens.");
	}
	door1->SetClosed(1);
	door2->SetClosed(0);
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
