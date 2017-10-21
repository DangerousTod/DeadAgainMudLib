#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("%^GREEN%^Aspens%^RESET%^");
    SetLong("A swamp at the base of an evergreen forested mountain. South River and the River Wish should meet, somehow, to the south of here, but farther on to the south is a desert. Urmil and North City, sometimes called Perdition, are beyond this swamp. At the top of this mountain is a natural bridge over South River and Urmil Road to the Wolff Mountains. Beyond the Wolff Mountains, far to the north is the legendary Blue Mountain.");
    SetExits( ([
        "north" : "/domains/woodland/room/aspen2",
        "southwest" : "/domains/perdition/room/slime_room8",
        "east" : "/domains/woodland/room/aspen3.c",
      ]) );

}
void init(){
    ::init();
}
