#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
inherit LIB_ARMOR;

static void create(){
    armor::create();
       SetKeyName("sash");
       SetAdjectives ( ({"sailor's sash"}) );
       SetId( ({"sash","wrap"}) );
       SetShort("a colorful length of cloth");
       SetLong("Pirates, swashbucklers, and sailors-the men of the sea-wear these colorful lengths of cloth as belts to denote rank, wealth and respect.");
    SetMass(50);
     SetDollarCost(10);
     SetProtection(KNIFE,25);
    SetArmorType(A_BODY_ARMOR);
}
void init(){
    ::init();
}
