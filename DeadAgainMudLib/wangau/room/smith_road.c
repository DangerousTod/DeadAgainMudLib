#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of gate.c");
    SetLong("The terminus of Blacksmith Road is the gate of Castle Wangau. Blacksmith Road winds through the moss-dusted rocky hillock upon which the castle stands. To the west is the muster of the castle. To the south, bolted into the volcanic rock of the castle wall is a squarish door.");
    SetItems(([
        ({ "walls", "rock", "volcanic roock", "volcanic rock", "castle wall", "gate", "gate house", "gate wall gatehouse wall", "gatehouse wall", "gate wall" }) : "Large angular stones set with very thin lines of mortar transition from the south wall, up to an arched ceiling, and down to a matching west wall. Though the rock seems to crumble at a touch. and the grains are sharp enough to burn the skin, there is no observable dust left on the fingers nor any marking on the stone.",
      ]));
    SetExits(([
        "west" : "/domains/wangau/room/gate",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
