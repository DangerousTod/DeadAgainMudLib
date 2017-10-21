#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("South Gate Gatehouse");
    SetLong("The gatehouse of the southern city gate. There is a lever here which you can press to close the gate or pull to open it.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetInventory(([
        "/domains/urmil/s_gate_lever" : 1,
      ]));
    SetExits( ([
        "down" : "/domains/urmil/room/turret8",
        "up" : "/domains/urmil/room/turret10.c",
      ]) );

}
void init(){
    ::init();
}
