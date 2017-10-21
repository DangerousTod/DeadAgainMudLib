#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Leather Foot Road");
    SetLong("The forest is thin here, the trees are few and spread wide across the backside of a sloping sunken mountain. A high valley wall is the distant northern horizon. An older forest grove is to the northwest in the depth of the valley.");
    SetInventory(([
        "/domains/north/npc/thief" : 1,
      ]));
    SetExits( ([
        "southeast" : "/domains/north/room/foot6",
        "northwest" : "/domains/north/room/foot8.c",
      ]) );

}
void init(){
    ::init();
}
