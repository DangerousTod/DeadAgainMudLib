#include <lib.h>
#include <meal_types.h>

inherit LIB_MEAL;

static void create() {
	meal::create();
	SetKeyName("breadfruit");
	SetId(({"breadfruit"}));
	SetShort("a piece of breadfruit");
	SetLong("A tasty fruit for a snack whenever you are hungry.");
	SetMass(5);
	SetStrength(30);
	SetDollarCost(1);
	SetMealType(MEAL_FOOD);
	SetMealMessages("You eat the tasty fruit, slurping the juices.",
		"$n slurps $P breadfruit.");
}
void init(){
	::init();
}
