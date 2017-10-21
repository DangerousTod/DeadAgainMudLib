#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(5);
    SetShort("Spider Tunnel");
    SetLong("A tunnel chipped through the bedrock below the Night Fall Forest. Here, at the eastern end of the tunnel, is a gleaming silver door. Beside the door is an %^RED%^iron lever%^RESET%^.");
    SetItems(([
        ({ "iron", "lever", "iron lever" }) : "Pull lever to open the gate, Press lever to close it, you think...",
      ]));
    SetInventory(([
        "/domains/north/obj/spider_gate_lever" : 1,
      ]));
    SetExits( ([
        "west" : "/domains/north/room/spider1",
        "east" : "/domains/north/room/vault.c",
      ]) );
    SetDoor("east","/domains/north/doors/arachnid_gate.c");

}
void init(){
    ::init();
}
