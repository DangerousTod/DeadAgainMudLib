#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;

static void create() {
    item::create();
      SetKeyName("gleaming sword");
      SetId( ({ "sword", "gleaming sword", "magicsword"}));
    SetShort("a sharp sword");
      SetLong("A fine, sharp, gleaming sword.");
    SetMass(300);
    SetBaseCost("silver",50);
    SetVendorType(VT_WEAPON);
       SetClass(200);
    SetDamageType(BLADE);
    SetWeaponType("blade");
}
