#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ARMOR;

static void create() {
	armor::create();
	SetKeyName("harness");
	SetId(({"harness"}));
	SetAdjectives(({"leather","brass","studded","brass studded leather harness"}));
	SetShort("leather harness");
	SetLong("A brass studded leather harness articulated to follow the exact movements of the arms.");
	SetVendorType(VT_ARMOR);
	SetMass(200);
	SetProtection(BLUNT, 20);
	SetProtection(BLADE, 50);
	SetProtection(KNIFE, 10);
	SetArmorType(A_BODY_ARMOR);
}
void init(){
    ::init();
}
