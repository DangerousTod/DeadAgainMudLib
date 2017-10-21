#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Icky Swamp Land");
    SetLong("Trash and rubbish is piled up beyond belief here. The trees and vines are almost impossible to find.");
    SetInventory(([
        "/domains/perdition/npc/wyvern" : 1,
      ]));
    SetExits(([
        "south" : "/domains/perdition/room/slop_room13",
      ]));

}
void init(){
    ::init();
}
