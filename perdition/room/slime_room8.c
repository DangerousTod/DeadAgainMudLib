#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("A crude practice hall is here wherecreeping vines and winding roots gather up what little soil there is to form a micro island. A rare glimpse through the vice-like wall of vines and trees shows daylight to the northeast!");
    SetInventory(([
        "/domains/perdition/npc/elishade" : 1,
        "/domains/perdition/armor/brigandine" : 1,
        "/domains/perdition/npc/rat" : 2,
        "/domains/perdition/weap/leaf_spear" : 2,
      ]));
    SetExits( ([
        "west" : "/domains/perdition/room/slime_room7",
        "southwest" : "/domains/perdition/room/slime_room5",
        "northeast" : "/domains/woodland/room/aspen1.c",
      ]) );

}
void init(){
    ::init();
}
