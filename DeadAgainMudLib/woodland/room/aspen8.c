#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Aspen Mountain");
    SetLong("An evergreen forested mountain.");
    SetInventory(([
        "/domains/woodland/npc/deer" : 5,
      ]));
    SetExits( ([
        "north" : "/domains/woodland/room/aspen7",
        "east" : "/domains/woodland/room/aspen16",
        "west" : "/domains/woodland/room/aspen5.c",
      ]) );

}
void init(){
    ::init();
}
