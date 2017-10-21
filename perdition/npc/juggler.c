#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
	sentient::create();
	SetKeyName("juggler");
	SetId(({"juggler"}));
	SetAdjectives(({"street","performer","juggler","clown"}));
	SetShort("a juggler");
	SetLong("A gaily dressed street performer who does trickls hoping for a copper or two.");
	SetMelee(1);
	SetLevel(1);
	SetRace("human");
	SetGender("male");
}
void init(){
   ::init();
}
