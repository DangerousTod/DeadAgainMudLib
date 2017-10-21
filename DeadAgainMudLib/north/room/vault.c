#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(5);
    SetShort("%^GREEN%^The Vault%^RESET%^");
    SetLong("A vault of death and evil deep below ground.");
    SetInventory(([
        "/domains/north/npc/vampire" : 4,
        "/domains/north/obj/chest2" : 3,
        "/domains/north/npc/g_rat" : 1,
        "/domains/north/npc/orc" : 3,
      ]));
    SetExits(([
        "west" : "/domains/north/room/spider2",
      ]));
    SetDoor("west","/domains/north/doors/arachnid_gate.c");

}
void init(){
    ::init();
}
