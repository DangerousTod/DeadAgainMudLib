#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("%^GREEN%^Mouth Of The Cave%^RESET%^");
    SetLong("A gloomy cave. The smell of ages of damp air is here. The sound of dripping water rings through the still air. Another cave is to the northeast.");
    SetExits( ([
        "west" : "/domains/north/room/valley3",
        "northeast" : "/domains/north/room/tomb2.c",
      ]) );

}
void init(){
    ::init();
}
