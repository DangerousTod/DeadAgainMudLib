#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Caves of Horror");
    SetLong("A deep valley within a pine forest. Rocky cliff walls, loaded with moss and stunted pine trees are to the east and west. A chill is in the air.");
    SetInventory(([
        "/domains/north/npc/wolf" : 2,
        "/domains/north/npc/orc" : 2,
      ]));
    SetExits(([
        "south" : "/domains/north/room/valley4",
      ]));

}
void init(){
    ::init();
}
