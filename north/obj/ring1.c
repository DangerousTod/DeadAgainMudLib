//   cut down from wedding_ring
#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ARMOR;

static void create() {
    armor::create();
	SetKeyName("golden ring");
	SetId(({"ring"}));
	SetAdjectives( ({"golden","elven","gold"}) );
	SetShort("a golden ring");
	SetLong("A ring made of gold with brilliant etchings of ivy and knot work.");
    SetVendorType(VT_ARMOR | VT_MAGIC);
    SetMass(10);
    SetValue(0);
    SetDamagePoints(1000000);
    SetProtection(BLUNT, 3);
    SetProtection(BLADE, 3);
    SetProtection(KNIFE, 3);
    SetArmorType(A_RING);
    SetRestrictLimbs( ({"left hand"}) );
}

