/*    /domains/Praxis/etc/ale.c
 *    from Dead Souls
 *    created by Descartes of Borg 950603
 */

#include <lib.h>
#include <meal_types.h>

inherit LIB_MEAL;


static void create() {
    meal::create();
	SetKeyName("potion");
	SetId( ({ "brown bottle", "potion" }) );
	SetShort("brown bottle");
	SetLong("A potion in a brown bottle. It feels liek something good.");
    SetMass(60);
    SetMealType(MEAL_DRINK | MEAL_ALCOHOL);
    SetStrength(20);
	SetMealMessages("You drink the potion from the brown bottle.",
		"$N drinks a potion.");
    SetEmptyName("bottle");
	SetEmptyShort("an empty brown bottle");
    SetEmptyLong("It is an empty brown bottle that once held some ale.");
}
void init(){
    ::init();
}

int CanReceive() {
	if(present("brown bottle", this_object())){
		return 1;
		}
	eventForce("smile");
	set_heart_beat(1);
	return 1;
	}
	int PerformHeal(string dude){
	object person;
	int hp,mhp;
	person = present(dude,environment());
	hp = person->GetHealthPoints();
	mhp = person->GetMaxHealthJPoints()-10;
	if(hp > mhp){
		return 1;
		}
	if else {
		PerformHeal(dude);
	}
	return 1;
}
