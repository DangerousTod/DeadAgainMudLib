#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of carnival2.c");
    SetLong("Benches and rails along the northern tourney shield. Men rest from melee while their squires bring water, soup or even red hot iron. There is no entry to the tourney rink where melee is fought from here.");
    SetExits(([
        "north" : "/domains/wangau/room/carnival2",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
