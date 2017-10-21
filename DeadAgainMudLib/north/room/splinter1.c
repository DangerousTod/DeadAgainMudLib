#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of foot11.c");
    SetLong("The road is barely a trail into heavy terrain. Thickets and deadfalls compete with crumbling stone to slow your progress. A hole is here, you can let yourself %^GREEN%^down%^RESET%^ into it. Sulphur is so thick you can barely breathe.");
    SetExits( ([
        "south" : "/domains/north/room/foot11",
        "down" : "/domains/north/room/den1.c",
      ]) );
    SetInventory(([
        "/domains/north/npc/vulture" : 2,
      ]));

}
void init(){
    ::init();
}
