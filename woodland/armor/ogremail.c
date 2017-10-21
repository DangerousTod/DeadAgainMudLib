#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
inherit LIB_ARMOR;
static void create(){
    armor::create();
	SetKeyName("giant chainmail");
    SetId(({"armor","chainmail armor","chain mail armor","shirt","chainmail shirt","chainmail","chain mail shirt"}));
	SetShort("giant chainmail");
	SetLong("A giant filthy counterpart to chainmail, sized for a giant or an ogre.");
	SetMass(500);
    SetDollarCost(100);
    SetDamagePoints(100);
    SetProtection(BLUNT,4);
    SetProtection(BLADE,25);
    SetProtection(KNIFE,25);
    SetArmorType(A_BODY_ARMOR);
}
