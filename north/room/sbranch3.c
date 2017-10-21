#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Dwarven Mountain");
    SetLong("Deep under a mountain at the end of a broad road carved from the stone is a mighty gate.");
    SetItems(([
        ({ "gate", "mighty gate" }) : "The dwarven gate is built of pitch stained timbers, hanged with smouldering lamps, and belted with so much bronze there seems to be more bronze than wood.",
      ]));
    SetInventory(([
        "/domains/north/npc/dwarf" : 5,
      ]));
    SetExits(([
        "northeast" : "/domains/north/room/sbranch2",
      ]));

}
void init(){
    ::init();
}
