#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;


static void create() {
    item::create();
	SetKeyName("spear");
	SetId(({"spear"}));
	SetAdjectives(({"leaf blade","leaf bladed spear"}));
	SetShort("leaf bladed spear");
	SetLong("A broad three lobed, razor sharp spear only eight feet long.");
    SetMass(50);
    SetVendorType(VT_WEAPON);
    SetClass(30);
    SetDamageType(BLADE);
    SetWeaponType("blade");
}
void init(){
    ::init();
}
