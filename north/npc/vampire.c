#include <lib.h>
#include <damage_types.h>

inherit "/domains/north/etc/vampire_attk.c";

static void create() {
	::create();
	SetKeyName("vampire");
	SetId(({"vampire"}));
	SetAdjectives(({"evil","lost","one"}));
	SetShort("a vampire");
	SetLong("A diabolical presence overides the appearance of an otherwise average looking human.");
	SetLevel(13);
	SetRace("wraith");
	SetClass("fighter");
	SetMelee(3);
	SetSkill("melee attack",50,50,10);
	SetSkill("blade defense",50,50,10);
	SetSkill("knife defense",10,10,10);
	SetSkill("knife attack",25,25,10);
	SetStat("strength",90,1);
	SetStat("agility",90,1);
	SetResistance(PIERCE,"high");
	SetResistance(BITE,"high");
	SetResistance(COLD,"high");
	SetEncounter( (: CheckFoul :) );
}
void init() {
   ::init();
}
