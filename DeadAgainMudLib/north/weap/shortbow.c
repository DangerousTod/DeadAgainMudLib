#include <lib.h>
#include <vendor_types.h>
#include <damage_types.h>

inherit LIB_ITEM;

static void create() {
	item::create();
	SetKeyName("shortbow");
	SetId( ({ "shortbow" }) );
	SetAdjectives( ({"maple","spruce","laminate"}) );
	SetShort("a shortbow");
	SetLong("A bow of only a bit more than two feet length, but a heavy pull.");
	SetMass(25);
	SetVendorType(VT_WEAPON);
	SetClass(20);
	SetDamageType(KNIFE);
//    not sure why I can't use the below
//	SetDamageType(PROJECTILE);
	SetWeaponType("projectile");
}
void init() {
    ::init();
}
