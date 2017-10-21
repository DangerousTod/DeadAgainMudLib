#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;


static void create() {
    item::create();
    SetKeyName("cutlass");
    SetId( ({ "cutlass" , "sword" }) );
    SetAdjectives( ({ "curved", "sword" }) );
       SetShort("a curve bladed sword");
    SetLong("A stout curved bladed sword, handy to have in a fight or on the high seas.");
    SetMass(150);
     SetVendorType(VT_WEAPON);
     SetClass(30);
      SetDamageType(BLADE);
      SetWeaponType("blade");

}
void init(){
    ::init();
}
