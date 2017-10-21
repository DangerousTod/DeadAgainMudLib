/*    /domains/campus/etc/stool.c
 *    From the Dead Souls Object Library
 *    An example of a chair object
 *    Created by Descartes of Borg 961221
 */

#include <lib.h>

inherit LIB_CHAIR;


static void create() {
    chair::create();
    SetKeyName("bench");
    SetId("bench");
	SetAdjectives("ready","bench","ready bench");
	SetShort("a ready bench");
    SetLong("This is a typical wooden bench, the sort you might "+
            "see in a park. It appears designed for sitting on.");
	SetInventory(([
		"/domains/urmil/armor/chainmail.c" : 2,
		]));
    SetMass(1500);
    SetDollarCost(15);
    SetMaxSitters(3);
}
mixed CanGet(object ob) { return "The bench does not budge.";}
void init(){
    ::init();
}
