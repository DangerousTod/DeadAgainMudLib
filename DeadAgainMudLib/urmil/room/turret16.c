#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of turret14.c");
    SetLong("Guards stand ready here, it is not clear for what.");
    SetItems(([
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits(([
        "down" : "/domains/urmil/room/turret14",
      ]));

}
void init(){
    ::init();
}
