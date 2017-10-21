#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("City Guard Turret");
    SetLong("Guards stand ready here, it is not clear for what.");
    SetItems(([
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/garden",
        "east" : "/domains/urmil/room/turret14.c",
      ]) );

}
void init(){
    ::init();
}
