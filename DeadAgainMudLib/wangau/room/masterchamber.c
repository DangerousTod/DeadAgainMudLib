#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("Master Bed Chamber");
    SetExits(([
        "west" : "/domains/wangau/room/greatroom",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
