#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("A roaring drain is to the southwest. The sound of it is powerful, yet it does little to break the heat and dank odor trapped in the twisted trees. The water is rather deep and a bit chilly.Thesides of the channel are too slimy and too steep to climb.");
    SetItems(([
        ({ "mud", "slime", "channel" }) : "The banks of the channel are so slimy with mud there is no way to climb out.",
      ]));
    SetExits( ([
        "northeast" : "/domains/northswamp/room/slop_room5",
		"southwest" : "/domains/northswamp/room/sewer1.c",
        "south" : "/domains/northswamp/room/trash_room3.c",
      ]) );

}
void init(){
    ::init();
}
