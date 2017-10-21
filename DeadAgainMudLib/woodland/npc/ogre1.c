#include <lib.h>

inherit "/domains/woodland/etc/ogre_attk.c";

static void create() {
    ::create();
    SetKeyName("ogre");
    SetId(({"ogre"}));
    SetAdjectives(({"guard","ogre guard"}));
    SetShort("ogre guard");
    SetLong("A monsterously over sized humanoid with exagerated features and hands too large even for his enormous body.");
    SetInventory(([
        "/domains/woodland/weap/o_spear" : "wield spear",
      ]));
    SetLevel(30);
    SetMelee(20);
    SetRace("ogre");
    SetUnique(5);
    SetGender("male");
    SetEncounter( (: CheckFoul :) );
}
void init(){
    ::init();
}
