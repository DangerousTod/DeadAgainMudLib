#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ARMOR;

static void create() {
    armor::create();
      SetKeyName("punch shield");
      SetId( ({ "shield" }) );
	SetAdjectives( ({ "small", "gold", "punch" }) );
	SetShort("a small shield of gold");
	SetLong("A small shield made to cover the back of one hand. This one is made of gold.");
      SetDamagePoints(25);
    SetVendorType(VT_ARMOR);
      SetMass(50);
	SetBaseCost("gold",150);
    SetArmorType(A_SHIELD);
    SetProtection(BLUNT, 5);
    SetProtection(BLADE, 5);
    SetProtection(KNIFE, 5);
   }

