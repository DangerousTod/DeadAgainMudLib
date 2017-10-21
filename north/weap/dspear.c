#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;


static void create() {
    item::create();
	SetKeyName("spear");
	SetId( ({ "spear" }) );
	SetAdjectives( ({ "broad blade","short shaft" }) );
	SetShort("a dwarf fighting spear");
	SetLong("A broad bladed spear with a short thick haft suited for a dwarf.");
    SetMass(50);
    SetVendorType(VT_WEAPON);
	SetClass(50);
	SetDamageType(KNIFE);
	SetWeaponType("knife");
}
void init(){
    ::init();
}
