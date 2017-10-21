#include <lib.h>
inherit LIB_NPC;
static void create(){
    npc::create();
    SetKeyName("galdiator");
    SetId(( { "gladiator","warrior","champion" }) );
      SetShort("a gladiator");
      SetLong("A human warrior skilled in deadly combat.");
      SetInventory(([
          "/domains/north/armor/pants" : "wear",
          "/domains/north/armor/helmet" : "wear",
          "/domains/north/weap/trident" : "wield",
        ]));
      SetLevel(10);
      SetRace("human");
      SetClass("fighter");
      SetGender("male");
      //SetMaxHealthPoints(550);
  }
