#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Royal Mansion");
    SetLong("A spacious living area filled with several couches, each piled with pillows. Curtains hang over every inch of the wall space. The floor is a stiff defted fabric which scrunches playfully when trod upon. An iron door is set in the northeast corner. A wooden door, drenched in rosy stain is to the east. A patio, visible through a nic in the curtains is to the west.");
    SetExits( ([
        "northeast" : "/domains/wangau/room/hall",
        "west" : "/domains/wangau/room/patio1",
        "east" : "/domains/wangau/room/greatroom.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
