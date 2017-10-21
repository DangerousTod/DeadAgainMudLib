#include <lib.h>
inherit LIB_NPC;
static void create(){
    npc::create();
    SetKeyName("sleen champion");
    SetId( ({ "sleen","champion","slimy one","green one" }) );
    SetShort("a sleen");
    SetLong("A giant sleen warrior with glowing green skin, a viper's body and four muscular arms.");
    SetInventory(([
        "/domains/urmil/armor/punch" : "wear punch",
        "/domains/campus/weap/sharpsword.c" : "wield sword",
        "/domains/campus/weap/sharpsword" : 4,
        "/domains/north/armor/helmet" : "wear helmet",
        "/domains/north/weap/trident" : "wield trident",
      ]));
    SetLevel(10);
    SetRace("sleen");
    SetClass("fighter");
    SetGender("female");
    //SetMaxHealthPoints(550);
}
void init(){
    ::init();
}
