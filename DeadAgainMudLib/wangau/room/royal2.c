#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of royal1.c");
    SetLong("The east wing of the royal box reserved for the fathers and elders of the people, wise men and women all very solemn. The grand royal box is to the west. From this vantage point the planks floor of the tourney rink and white paint splattered pylons show the scarring of battle. Wide stains, the darkening of blood show the fury with which honor is sought.");
    SetExits(([
        "west" : "/domains/wangau/room/royal1",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
