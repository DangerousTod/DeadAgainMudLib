#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;

static void create() {
    item::create();
	SetKeyName("spear");
	SetAdjectives(({"huge","giant","ogre","ogre spear"}));
    SetId( ({"spear"}) );
	SetShort("ogre spear");
	SetLong("A ridiculously large spear.");
	SetMass(500);
	SetHands(2);
    SetVendorType(VT_WEAPON);
    SetClass(30);
    SetDamageType(PIERCE);
    SetWeaponType("projectile");
}

void init(){
    ::init();
    add_action("podcast","podcast");
}

int podcast(){
    write("Somehow the javelin just doesn't seem to do that now.");
    return 1;
}
