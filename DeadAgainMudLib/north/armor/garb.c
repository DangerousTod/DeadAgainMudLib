#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
inherit LIB_ARMOR;

static void create() {
	armor::create();
	SetKeyName("garb");
	SetId( ({"garb"}) );
	SetAdjectives( ({"forest","stealth","elf"}) );
	SetShort("forest garb");
	SetLong("Tough clothing ready-made for protection from the elements, stealth, and being hidden in the forest.");
	SetMass(50);
	SetArmorType(A_BODY_ARMOR);
	SetProtection(KNIFE, 15);
	SetProtection(COLD, 50);
	SetProtection(BLADE, 5);
//	SetProtection(PROJECTILE, 20);
}
void init(){
   ::init();
}
