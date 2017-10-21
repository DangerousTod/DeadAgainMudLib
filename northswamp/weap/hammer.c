#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;


static void create() {
    item::create();
      SetKeyName("iron hammer");
      SetId( ({ "hammer" }) );
      SetAdjectives( ({ "iron" }) );
      SetShort("an iron hammer");
      SetLong("A dangerous length of metal with a heavy spiked end.");
      SetMass(200);
    SetVendorType(VT_WEAPON);
    SetClass(30);
      SetDamageType(BLUNT);
      SetDamageType("blunt");
}
void init(){
    ::init();
}
