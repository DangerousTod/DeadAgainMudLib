#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;


static void create() {
    item::create();
	SetKeyName("hammer");
	SetId ( ({ "hammer" }) );
	SetAdjectives( ({ "hammer","brass","short" }) );
	SetShort("a brass hammer");
	SetLong("A hammer sized for a dwarf. The handle is fat and the head is heavy. It is for fighting. It is made of brass.");
    SetMass(50);
    SetVendorType(VT_WEAPON);
    SetClass(30);
	SetDamageType(BLUNT);
	SetWeaponType("blunt");
}
void init(){
    ::init();
}
