#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("City Guard Storage Room");
    SetLong("A damp, dark fortified storage room with the emergency rations of the City Guard.");

    SetItems(([
        ({"children"}) : "Well fed little urchins who prove themselves unlikely to steal.",
        ({"dogs"}) : "Dogs weave through the press.",
      ]));
    SetInventory(([
        "/domains/urmil/obj/cask" : 20,
        "/domains/urmil/obj/wrack" : 2,
        "/domains/urmil/obj/jerkybox" : 10,
      ]));
    SetExits( ([
        "up" : "/domains/urmil/room/turret11",
        "down" : "/domains/urmil/room/weapons.c",
      ]) );

}
void init(){
    ::init();
}
