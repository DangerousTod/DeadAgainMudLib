#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
	sentient::create();
	SetKeyName("anaconda");
	SetId(({"anaconda"}));
	SetAdjectives(({"giant","snake","serpent","giant anaconda"}));
	SetShort("a giant anaconda");
	SetLong("A monsterous serpent, truly saurian both venomous and constricting.");
	SetLevel(20);
	SetMelee(20);
	SetMaxHealthPoints(200);
	SetRace("viper");
	SetGender("female");
	SetAction(10, ({"The anaconda coils up lazily","The anaconda springs","The anaconda rolls and thrashes."}));
}
void init(){
    ::init();
}
