#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("copy of valley2.c");
    SetLong("A deep valley within a pine forest. Rocky cliff walls, loaded with moss and stunted pine trees are to the east and west. A chill is in the air.");
    SetExits( ([
        "southeast" : "/domains/north/room/valley2",
        "north" : "/domains/north/room/valley5.c",
      ]) );

}
void init(){
    ::init();
}
