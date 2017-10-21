#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Bits of rubbish collect here where the trees are tall and the water is deep.");
    SetInventory(([
        "/domains/perdition/npc/g_anaconda" : 1,
      ]));
    SetExits( ([
        "west" : "/domains/perdition/room/slop_room10",
        "northwest" : "/domains/perdition/room/slop_room13",
        "east" : "/domains/perdition/room/slime_room1.c",
      ]) );

}
void init(){
    ::init();
}
