#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
	sentient::create();
	SetKeyName("flamingo");
	SetId(({"flamingo"}));
	SetAdjectives(({"pink","mighty","big","bird"}));
	SetShort("a flamingo");
	SetLong("A large, graceful pink flamingo.");
	SetLevel(1);
	SetMelee(100);
	SetMaxHealthPoints(100);
	SetRace("bird");
	SetGender("male");
	SetWanderSpeed(5);
	SetMessage("come","$N lands with grace.");
	SetMessage("leave","$N flaps its wings a flies $D.");
}
void init() {
    ::init();
}
