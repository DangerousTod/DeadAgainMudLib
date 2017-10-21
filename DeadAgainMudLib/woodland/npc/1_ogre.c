#include <lib.h>

inherit "/domains/woodland/etc/ogre_attk.c";

static void create() {
    ::create();
    SetKeyName("cheif");
    SetId(({"Cheif"}));
    SetAdjectives(({"cheif","ogre","cheif ogre","ogre cheif"}));
    SetShort("Ogre Cheif");
    SetLong("An ogre even more gigantic and vile than the others.");
    SetInventory(([
        "/domains/woodland/armor/ogremail" : "wear",
        "/domains/woodland/weap/battleaxe" : "wield",
      ]));
    SetLevel(60);
    SetMelee(20);
    SetRace("ogre");
    SetUnique(1);
    SetGender("male");
    SetEncounter( (: CheckFoul :) );
}
void init(){
    ::init();
}
