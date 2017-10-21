#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of stable_ramp.c");
    SetLong("At least a dozen horses are kept here ready to defend the castle or perhaps used for a show now and then. Six stalls are at this north end of the stable above a large bile of hay and stacks of dry feed. A spigot sprinkles out water into a trough where a stable boy sits.");
    SetExits(([
        "north" : "/domains/wangau/room/stable_ramp",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
