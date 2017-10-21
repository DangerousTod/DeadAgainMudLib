#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("%^GREEN%^Mine Shaft%^RESET%^");
    SetLong("Part of the hill has been stripped and dug away. The dirt is more than laid bare. A mine shaft is here. It seems abandonned and very drak.");
    SetExits( ([
        "north" : "/domains/woodland/room/aspen13",
        "down" : "/domains/woodland/room/tunnel2.c",
      ]) );

}
void init(){
    ::init();
}
