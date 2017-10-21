#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("Thick grasses and ferns provide little resistance, but anything could be underfoot. Hornets and flies swarm nearby, the grasses flicker as slithering things flash by otherwise unseen.");
    SetExits( ([
        "north" : "/domains/northswamp/room/ferns4",
        "southeast" : "/domains/northswamp/room/ferns1",
        "south" : "/domains/northswamp/room/mud1.c",
      ]) );

}
void init(){
    ::init();
}
