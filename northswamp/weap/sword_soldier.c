#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;


static void create() {
    item::create();
   SetKeyName("sword");
    SetId( ({ "sword" }) );
    SetAdjectives( ({ "sturdy","broad blade","sword" }) );
    SetShort("a workingman's blade");
    SetLong("A wide sturdy blade with a heavy point.");
    SetMass(50);
    SetVendorType(VT_WEAPON);
    SetClass(100);
    SetDamageType(BLADE);
    SetWeaponType("blade");
}
void init(){
    ::init();
}
