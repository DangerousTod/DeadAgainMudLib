#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("West Lane");
    SetLong("A thick red strain of wheat dominates the hills. A forested mountain is to the east. Above, in the sky, is the perpetual purple heaviness of coming rain. Always.");
    SetExits( ([
        "east" : "/domains/north/room/lane3",
        "west" : "/domains/north/room/lane5.c",
      ]) );

}
void init(){
    ::init();
}
