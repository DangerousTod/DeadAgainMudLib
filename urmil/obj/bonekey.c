#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void create(){
    ::create();
	SetKeyName("key");
	SetAdjectives( ({"bone","large","copper"}) );
	SetId( ({"bone key"}) );
    SetShort("a key");
	SetLong("A large key made of bone and copper.");
    SetMass(20);
    SetBaseCost("silver",10);
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}
