#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of turret13.c");
    SetLong("Guards stand ready here, it is not clear for what.");
    SetItems(([
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/turret15",
        "west" : "/domains/urmil/room/turret13",
        "up" : "/domains/urmil/room/turret16.c",
	    "down" : "/domains/urmil/room/tunnel1.c",
      ]) );
	SetDoor("down","/domains/urmil/doors/guard_tunnel.c");

}
void init(){
    ::init();
}
