#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil City Garden");
    SetLong("The city gardens of the people of Urmil, a living gift growing with us courtesy of the Priests of Binzone.");
    SetItems(([
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "north" : "/domains/urmil/room/turret13",
        "south" : "/domains/urmil/room/maze1",
        "west" : "/domains/urmil/room/shadow",
        "east" : "/domains/urmil/room/turret15.c",
      ]) );

}
void init(){
    ::init();
}
