#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Gladator School");
    SetLong("A trail leaps from cliff to cliff vaguely to the northwest. Crude stone steps lead down. To the east is a wheat field as wide as a sea and a forest under a lonely mountain, a beautiful vista.");
    SetExits( ([
        "down" : "/domains/north/room/nbranch1",
        "northwest" : "/domains/north/room/nbranch3.c",
      ]) );

}
void init(){
    ::init();
}
