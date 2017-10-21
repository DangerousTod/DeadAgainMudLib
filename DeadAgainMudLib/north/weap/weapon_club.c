#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;


static void create() {
    item::create();
      SetKeyName("club");
      SetId( ({ "club", "wooden club"}));
      SetAdjectives( ({ "wooden", "simple" }));
      SetShort("a simple wooden club");
      SetLong("A stout wooden club with a knob on one end and a grip on the other.");
      SetMass(100);
    SetVendorType(VT_WEAPON);
    SetClass(30);
      SetDamageType(BLUNT);
      SetWeaponType("blunt");

}
void init(){
    ::init();
}
