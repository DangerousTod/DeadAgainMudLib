#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
inherit LIB_ARMOR;

static void create(){
    armor::create();
	SetKeyName("helmet");
	SetId(({"helmet"}));
	SetAdjectives(({"gold","golden","golden helmet"}));
	SetShort("a golden helmet");
	SetLong("A golden helmet, as brilliant as a crown yet with a face and a heavy iron cap.");
	SetMass(50);
	SetArmorType(A_HELMET);
	SetProtection(KNIFE, 20);
	SetProtection(BLADE, 20);
	SetProtection(BLUNT, 20);
    SetProtection(COLD, 5);
}
void init(){
    ::init();
}
