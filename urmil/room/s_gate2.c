#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil South Gate");
    SetLong("The south gate is somewhat quiet even with the horsemarket so near. The south gate guardhouse is to the west. A tough looking Sergent is watching from inside. To the south is the gate and a battlefield beyond that.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/s_gate1",
        "north" : "/domains/urmil/room/horsemarket",
        "west" : "/domains/urmil/room/turret8.c",
      ]) );
    SetDoor("south","/domains/urmil/doors/urmil_gate_s.c");

}
void init(){
    ::init();
}
