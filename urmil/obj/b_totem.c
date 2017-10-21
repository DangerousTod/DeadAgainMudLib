#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void create(){
    ::create();
	SetKeyName("totem");
	SetAdjectives( ({"blue","conch","totem","badge"}) );
	SetId( ({"blue totem"}) );
	SetShort("a blue totem");
	SetLong("A leather round stained blue.");
	SetAdjectives( ({"steel","strong"}) );
	SetId( ({"guard key"}) );
	SetMass(2);
	SetBaseCost("silver",5);
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}
