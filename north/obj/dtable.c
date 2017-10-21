#include <lib.h>

inherit LIB_TABLE;


void create() {
    ::create();
	SetKeyName("table");
	SetId( ({"table"}) );
	SetAdjectives( ({"three quarter sized"}) );
	SetShort("a sturdy table");
	SetLong("A nicely builty table, not overly imaginative and smallish.");
    SetBaseCost("silver",1);
    SetMaxCarry(500);

}
void init(){
    ::init();
}
