#include <lib.h>
inherit LIB_DUMMY;
inherit LIB_PULL;
inherit LIB_PRESS;

int unlockDoor(object who) {
	object door = load_object("/domains/urmil/doors/cell_6.c");
	if(!door->GetLocked()){
		write("The bolt is drawn.");
	}
	else {
		write("You draw the bolt.");
		say(this_player()->GetName()+" draws the bolt.");
	door->SetLocked(0);
	}
	return 1;
}
int lockDoor(object who){
	object door = load_object("/domains/urmil/doors/cell_6.c");
	if(door->GetLocked()){
		write("The bolt is closed.");
	}
	else
	if(!door->GetClosed()){
		write("Close the door first!");
	}
	else {
		write("You shoot the bolt");
		say(this_player()->GetName()+" shoots the bolt.");
	door->SetLocked(1);
	}
	return 1;
}
static void create() {
	dummy::create();
	SetKeyName("bolt");
	SetId(({"bolt"}));
	SetAdjectives("thick","wooden");
	SetShort("locking bolt");
	SetLong("A bolt that shuttles into the wall. Pull the bolt to draw it open, press the bolt to shoot it closed.");
	SetPress((: lockDoor :));
	SetPull((: unlockDoor :));
}
