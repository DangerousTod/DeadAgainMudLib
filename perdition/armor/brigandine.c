#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
inherit LIB_ARMOR;

static void create(){
    armor::create();
	SetKeyName("brigandine");
	SetId(({"brigandine"}));
	SetAdjectives(({"chest","body","body armor"}));
	SetShort("brigandine");
	SetLong("A heavy piece of steel and leather body armor.");
	SetMass(200);
	SetArmorType(A_BODY_ARMOR);
	SetProtection(BLADE, 60);
	SetProtection(BLUNT, 80);
	SetProtection(KNIFE, 70);
	SetProtection(COLD, 50);
}
void init(){
    ::init();
}
