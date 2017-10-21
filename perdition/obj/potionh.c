//			a healing potion
//			you can't take it with you
//			but it does the trick
//		Vulture at DeadAgain a Dead Souls LPMUD
//			January 4, 2017
#include <lib.h>

inherit LIB_DUMMY;
inherit LIB_DRINK;
inherit LIB_CONTAINER;
inherit LIB_OBJECT;

varargs mixed eventDrink(object who, string substance){
	int hp,mhp;
	hp = this_player()->GetHealthPoints();
	mhp = this_player()->GetMaxHealthPoints();
	if(((mhp - hp) > 50) || ((mhp - hp) == 50)) {
		this_player()->AddHP(50);
		write("Vitality surges within you.");
		write("You toss the tiny vial.");
	}
	if(!((mhp - hp) > 50) || ((mhp - hp) == 50)) {
		write("Meh.");	
		write("You toss the tiny bottle.");
	}
	else {
		write("A bitter drink");
	}
	this_object()->eventDestruct();
	return 1;
}

static void create() {
	dummy::create();
	SetKeyName("bottle");
	SetId(({"bottle"}));
	SetAdjectives("tiny");
	SetShort("a tiny bottle");
	SetLong("A tiny lead bottle with a powerful solution inside.");
}
