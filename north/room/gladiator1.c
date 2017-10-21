#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("%^GREEN%^Gladiator Arena%^RESET%^");
    SetLong("A gladiator training arena on a mountaintop. A circle of gleaming pillars marks out a flattened part of this mountaintop as special, sacred even. A pyramid, only seven steps high is to the north. Atop the pyramid is a white stone building.");
    SetExits( ([
        "east" : "/domains/north/room/nbranch4",
        "north" : "/domains/north/room/gladiator_hall.c",
      ]) );

}
void init(){
    ::init();
}
