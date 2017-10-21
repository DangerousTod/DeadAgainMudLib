#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;

static void create() {
	item::create();
	SetKeyName("trident");
	SetId( ({ "trident" }) );
	SetAdjectives( ({ "steel","pointy","triple tined" }) );
	SetShort("a steel shafted trident");
	SetLong("A long steel shaft with three nasty serrated spear heads.");
	SetMass(200);
	SetVendorType(VT_WEAPON);
	SetClass(80);
	SetDamageType(KNIFE);
	SetWeaponType("knife");
}
void init(){
    ::init();
}
