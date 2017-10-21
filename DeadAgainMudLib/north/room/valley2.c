#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Caves of Horror");
    SetLong("A deep valley within a pine forest. Rocky cliff walls, loaded with moss and stunted pine trees are to the east and west. A chill is in the air.");
    SetExits( ([
        "south" : "/domains/north/room/valley1",
        "northeast" : "/domains/north/room/valley3",
        "northwest" : "/domains/north/room/valley4.c",
      ]) );

}
void init(){
    ::init();
}
