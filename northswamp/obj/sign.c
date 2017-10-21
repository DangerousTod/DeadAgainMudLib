#include <lib.h>
inherit LIB_ITEM;
inherit LIB_READ;

void create(){
    ::create();
	SetKeyName("sign");
	SetId( ({"sign"}) );
	SetAdjectives( ({"sign"}) );
	SetShort("an important looking SIGN");
	SetLong("This sign WARNS all of the DANGERS to the EAST.");
    SetItems(([
			({ "sign" }) : "This is a WARNING",
                ]));
    SetRead(([
			({ "read sign","read the sign","sign" }) : "BEWARE",
                ]));
	SetLanguage("english");
	SetPreventGet("the sign is permanently applied");
	}
void init(){
    ::init();
}
