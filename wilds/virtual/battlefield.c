#include <lib.h>
#include <dirs.h>
#include <virtual.h>

inherit LIB_VIRT_LAND;

static private int XPosition, YPosition, found;
static string lupus;
int max_north = 10;
int max_south = -10;
int max_west = -55;
int max_east = -40;

//                   RemoveExits before AddingExits
//                   RemoveExit("northwest");
//                   AddExit("northwest","/domain/path/room/file");
//                   if(x == int && ( y < int && y> int)){
//                   makes general application
//                   develope standard room for exit
//           smaller virts are sensible to players too
//               SetEnters((["virt" : "/domains/path/virt/file/int,int"]));
//               to enter virt.
//               not sure about flying 1000's or virt maps either, yet
//               Vulture@DeadAgain ds3.8.2 12/16/16
//
varargs void SetLongAndItems(int x, int y, int z);

varargs int LimitTravel(int requested, int maximum, int lessthan){
    if(lessthan && requested < maximum) return maximum;
    else if(lessthan && requested > maximum) return requested;
    else if(requested > maximum) return maximum;
    else return requested;
}


varargs static void create(int x, int y) {
    string n, s, e, w;
    string ne, nw, se, sw;
    string fly;

    SetNoReplace(1);
    virt_land::create();
    /* Without the virtual exemption, virts with npc's
     * wind up being perpetual motion NPC factories.
     */
    SetExemptVirtual(1);
    XPosition = x;
    YPosition = y;
    SetClimate("temperate");
    SetAmbientLight(30);
    SetLongAndItems(x, y);
	SetShort("a battlefield");
	if( x == max_east ) e = "battlefield/" + (x) + "," + y;
	else e = "battlefield/" + (x+1) + "," + y;
	if( x == max_west ) w = "battlefield/" + (x) + "," + y;
	else w = "battlefield/" + (x-1) + "," + y;
	if( y == max_north ) n = "battlefield/" + x + "," + (y);
	else n = "battlefield/" + x + "," + (y+1);
	if( y == max_south ) s = "battlefield/" + x+ "," + (y);
	else s = "battlefield/" + x + "," + ( y - 1 );
    fly = "sky/" + x + "," + y + "," + 1;

	nw = "battlefield/" + LimitTravel(x - 1, max_west, 1) + "," + LimitTravel( y + 1, max_north);
	ne = "battlefield/" + LimitTravel(x + 1, max_east) + "," + LimitTravel(y + 1, max_north);
	sw = "battlefield/" + LimitTravel(x - 1, max_west, 1) + "," + LimitTravel(y - 1, max_south, 1);
	se = "battlefield/" + LimitTravel(x + 1, max_east) + "," + LimitTravel(y - 1, max_south, 1);

    SetFlyRoom(__DIR__+fly);

    SetGoMessage("You can't travel in that direction.");
    if( n ) AddExit("north", __DIR__ + n);
    if( s ) AddExit("south", __DIR__ + s);
    if( e ) AddExit("east", __DIR__ + e);
    if( w ) AddExit("west", __DIR__ + w);
    if( ne ) AddExit("northeast", __DIR__ + ne);
    if( nw ) AddExit("northwest", __DIR__ + nw);
    if( se ) AddExit("southeast", __DIR__ + se);
    if( sw ) AddExit("southwest", __DIR__ + sw);

if(x == -55 && y == -3 ){
	RemoveExit("west");
	RemoveExit("northwest");
	RemoveExit("southwest");
	RemoveExit("east");
	AddExit("west","/domains/wilds/room/tangle_gate.c");
	}

if(x == -50 && y == 9){
	SetLong("A ramp leads up to the Urmil City Gate.");
	RemoveExit("northeast");
	RemoveExit("northwest");
	RemoveExit("north");
	RemoveExit("west");
	RemoveExit("east");
	AddExit("north","/domains/urmil/room/s_gate1.c");
}

if(x == -40 && y == 7){
	SetLong("Travellers rest in a camp town surrounding a large stone well.");
	RemoveExit("north");
	RemoveExit("south");
	RemoveExit("east");
	AddExit("northeast","/domains/wilds/room/well1.c");
}
	if(y == max_south){
        RemoveExit("south");
        RemoveExit("southeast");
        RemoveExit("southwest");
    }
    if(y == max_north){
        RemoveExit("north");
        RemoveExit("northeast");
        RemoveExit("northwest");
    }
    if(x == max_west){
        RemoveExit("west");
        RemoveExit("northwest");
        RemoveExit("southwest");
    }
    if(x == max_east){
        RemoveExit("east");
        RemoveExit("northeast");
        RemoveExit("southeast");
    }
}

varargs void SetLongAndItems(int x, int y, int z) {
    mapping inv, items;
    string str;
    ::SetLongAndItems(x, y, z);

	SetLong("A lonely haunted battlefield.");

    inv = ([]);
	str = "you wander the battlefield south of Urmil. Rocks and bones "
		"are scattered about. Here and there is broken weapon, a "
		"sword or a blunted axe head. ";
	if(query_night()) str += "The battlefield is fearsome and yet very, "
		"very still at night. ";
	else str+= "Rain and dust mingle together in a haze which rests here. ";
	if(x == max_north) str += " A spear wall stops you.";
	if(x == max_south) str += "Impassable mountains are to the south.";
	if(y == max_east) str += "A graveyard of men and machines.";
	if(y == max_west) str += "Tangled trees are too dense to enter.";
	SetItems( ([ ({ "battlefield" }) : "A flat expanse of red rock.",
		({"ghost warriors"}) : "probably a hallucination or a trick of the mind. ",
		({"sky"}) : "Even the sky seems a bit dimmer here.",
		({"weapons","broken weapons"}) : "Cast offs not worth stealing.",
		({"rocks"}) : "A few fist size rocks, bullets perhaps.",
		]) );
if(x == max_west) {
	AddItem( ({ "tangle","bush","brush","scrub"}),
		"The tangled evergreens are too thick.");
	}
if(x == max_east) {
	AddItem( ({ "pyres", "wreckage", "engine graveyard" }),
		"A graveyard of funeral pyres and wrecked seige engines is impassable.");
	}
if(y == max_north) {
	AddItem( ({ "spear wall" }),
		"The city defenses block the north exits from the battlefield with a wall of spears and twisted metal.");
	}
if(y == max_south) {
	AddItem( ({ "Gray Peaks" }),
		"Forbidding gray mountains that are hostile and unexplored.");
	}
else if( !random(10) )
	SetListen("default", "You hear the howling of wolves.");
    if( !random(55) )
		inv["/domains/wilds/npc/snake"] = random(3)+1;
    if( !random(45) )
		inv["/domains/wilds/npc/orc"] = 1;
    if( !random(15) )
		inv["/domains/wilds/npc/vulture"] = 1;
    if( !random(65) )
		inv["/domains/wilds/npc/thief"] = 1;
    if( !random(35) )
		inv["/domains/wilds/npc/gecko"] = 1;
    if( !random(75) )
		inv["/domains/wilds/npc/spider"] = 1;

    SetLong(str);
    SetDayLight(25);
    SetNightLight(0);
    SetInventory(inv);
}
