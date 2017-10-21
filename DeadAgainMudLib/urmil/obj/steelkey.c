#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void create(){
    ::create();
	SetKeyName("key");
	SetAdjectives( ({"steel","strong"}) );
	SetId( ({"guard key"}) );
    SetShort("a key");
	SetLong("A strong steel key.");
	SetMass(5);
	SetBaseCost("silver",100);
    SetBaseCost("silver",10);
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}
