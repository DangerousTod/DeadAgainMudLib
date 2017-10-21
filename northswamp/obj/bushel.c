#include <lib.h>

   inherit LIB_STORAGE;
	void create() {
	::create();
	SetKeyName("basket");
	SetId(({"basket"}));
	SetAdjectives(({"bushel basket","wire basket","hand basket","basket"}));
	SetShort("a basket");
	SetLong("A simple basket meant for carrying things.");
	SetInventory(([
		"/domains/northswamp/meals/breadfruit.c" : 7,
		]));
	SetMass(20);
	SetBaseCost("silver",5);
	SetMaxCarry(50);
}
void init(){
	::init();
}
