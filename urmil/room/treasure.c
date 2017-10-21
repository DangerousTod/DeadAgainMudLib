#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Under The Pyramid");
    SetLong("A the end of a gloomy hallway below the pyramid is a surprise!");
    SetInventory(([
        "/domains/urmil/npc/spider" : 2,
        "/domains/urmil/obj/tbox" : 1,
      ]));
    SetExits(([
        "north" : "/domains/urmil/room/pyramid18b",
      ]));

}
void init(){
    ::init();
}
