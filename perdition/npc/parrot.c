#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
	sentient::create();
	SetKeyName("parrot");
	SetId(({"parrot"}));
	SetAdjectives(({"green","blue","yellow","singing"}));
	SetShort("a parrot");
	SetLong("A small singing bird, such birds may live a century.");
	SetUnique(10);
	SetWimpy(50);
	SetLevel(1);
	SetWanderSpeed(6);
	SetGender("male");
	SetRace("bird");
	SetMelee(1);
	SetCanBefriend(1);
}
void init(){
    ::init();
}
