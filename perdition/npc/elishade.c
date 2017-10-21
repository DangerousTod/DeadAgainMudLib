#include <lib.h>
#include <objects.h>

inherit LIB_TRAINER;
void create(){
	trainer::create();
	SetKeyName("Elishade");
    SetId( ({ "sleen","champion","slimy one","green one" }) );
	SetShort("Elishade the Sleen");
	SetLong("A giant sleen warrior with glowing green skin, a viper's body and four muscular arms. She is a legendary warrior and will teach about the blade. Ask her, for example, \"ask elishade to train blade attack\". She will also train in knife, attack and defense both.");
	AddTrainingSkills(({"blade attack","blade defense","knife attack","knife defense"}));
	SetSkill("blade attack", 100);
	SetSkill("blade defense", 100);
	SetSkill("knife attack", 100);
	SetSkill("knife defense", 100);
	SetPolyglot(1);
	SetUnique(1);
    SetInventory(([
        "/domains/urmil/armor/punch" : "wear punch",
        "/domains/campus/weap/sharpsword.c" : "wield sword",
        "/domains/campus/weap/sharpsword" : 4,
        "/domains/north/armor/helmet" : "wear helmet",
        "/domains/north/weap/trident" : "wield trident",
      ]));
	SetLevel(75);
    SetRace("sleen");
    SetClass("fighter");
    SetGender("female");
    //SetMaxHealthPoints(550);
}
void init(){
    trainer::init();
}
