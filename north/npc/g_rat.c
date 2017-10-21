#include <lib.h>

inherit "/domains/north/etc/vampire_attk.c";

static void create() {
	  ::create();
	SetKeyName("giant rat");
	SetId(({"giant rat"}));
	SetAdjectives(({"giant","rat","giant rat"}));
	SetShort("a giant rat");
	SetLong("A rat big enough to ride like a horse, or maybe eat one.");
	SetLevel(50);
	SetMelee(2);
	SetSkill("melee attack",50,50,10);
	SetMaxHealthPoints(200);
    SetRace("rodent");
    SetGender("male");
	SetEncounter( (: CheckFoul :) );
}
void init(){
    ::init();
}
