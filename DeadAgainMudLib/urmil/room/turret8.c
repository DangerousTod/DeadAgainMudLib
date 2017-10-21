#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("South Gatehouse");
    SetLong("A simple out room for guards defending the less busy southern gate. Not much to speak of here. Walls, floor, steps that lead up to the upper level of the gatehouse. Above the gatehouse is a walkway which leads to a watchtower atop the east wall. The view is supposed to be phenomenal.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetInventory(([
        "/domains/urmil/npc/sergent" : 1,
      ]));
    SetExits( ([
        "east" : "/domains/urmil/room/s_gate2",
        "up" : "/domains/urmil/room/turret9.c",
      ]) );

}
void init(){
    ::init();
}
