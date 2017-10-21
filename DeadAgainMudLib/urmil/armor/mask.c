#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
inherit LIB_ARMOR;

static void create() {
   armor::create();
	SetKeyName("mask");
	SetAdjectives( ({"colorful mask"}) );
	SetId( ({"mask"}) );
	SetShort("a colorful paper mask");
	SetLong("A mask, probably ceremonial made of torn scraps of paper.");
	SetMass(5);
	SetDollarCost(50);
	SetProtection(KNIFE,5);
	SetArmorType(A_HELMET);
}
void init(){
    ::init();
}
