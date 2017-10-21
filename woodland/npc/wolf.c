#include <lib.h>
inherit "/domains/woodland/etc/ogre_attk.c";

static void create() {
	   ::create();
	SetKeyName("wolf");
	SetId(({"wolf"}));
	SetAdjectives(({"hungry","lean"}));
	SetShort("a wolf");
	SetLong("A prowling cousin to the dog.");
	SetClass("fighter");
	SetLevel(5);
	SetMelee(10);
	SetRace("dog");
	SetGender("male");
	SetEncounter( (: CheckFoul :) );
}
void init() {
    ::init();
}
