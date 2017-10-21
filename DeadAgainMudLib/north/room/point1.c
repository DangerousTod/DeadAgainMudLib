#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Point Break Cross Road");
    SetLong("A triangular corner atop a flattened mountain. Jagged peaks rise to the west. This peak, of the same granite or flint as the others, has been leveled. A broad stone highway slopes down into the mountain itself to the southwest. A broken staircase, carved into the rock, skips upward to the northwest climbing from ledge to ledge. To the east is a broad vista of golden whest. A staircase, quite broad and formal leads down to the wheat fields.");
    SetInventory(([
        "/domains/north/npc/vulture" : 3,
      ]));
    SetExits( ([
        "down" : "/domains/north/room/lane6",
        "northwest" : "/domains/north/room/nbranch1",
        "southwest" : "/domains/north/room/sbranch1.c",
      ]) );

}
void init(){
    ::init();
}
