#include <lib.h>
inherit LIB_NPC;
static void create(){
    npc::create();
	SetKeyName("guardian");
    SetId( ({ "champion", "human","npc","warrior"}) );
	SetShort("pyramid guardian");
	SetLong("A massive human warrior in a ceremonial mask.");
    SetLevel(10);
    SetRace("human");
    SetClass("fighter");
    SetGender("male");
    SetInventory(([
		"/domains/urmil/armor/mask.c" : "wear mask",
		"/domains/urmil/weap/sharpsword.c" : "wield sword",
                ]));
	SetGuard("down","The pyramid guardian shoves you back!");
}
void init() {
   ::init();
}
