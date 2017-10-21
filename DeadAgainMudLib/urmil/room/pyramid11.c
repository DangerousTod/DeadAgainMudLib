#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A corner room with a chair and hooks on the wall. To the south is a deeper gloom, even here below the pyramid.");
    SetItems(([
        ({ "hooks", "hook" }) : "A metal spike twisted upward for the hanging of something",
      ]));
    SetInventory(([
        "/domains/urmil/obj/simple_chair" : 1,
        "/domains/urmil/obj/jerkybox" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/pyramid13b",
        "west" : "/domains/urmil/room/pyramid10.c",
      ]) );

}
void init(){
    ::init();
}
