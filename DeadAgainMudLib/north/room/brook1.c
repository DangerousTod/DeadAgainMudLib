#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Stoney Brook");
    SetLong("The southern end of Stoney Brook Road is at the base of a white tower in a hardwood jungle. The tower, imposing as it is, in no way prevents anyone from going around...");
    SetItems(([
        ({ "tower", "statue", "gate" }) : "A statue of a woodland defender forty feet tall with a large wooden gate at his knees.",
      ]));
    SetInventory(([
        "/domains/north/npc/elf" : 4,
      ]));
    SetExits(([
        "northeast" : "/domains/north/room/brook2",
      ]));

}
void init(){
    ::init();
}
