#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("North Swamp");
    SetLong("Ages of junk lay about in partially sorted piles. Much of the junk is caked with mud and found hanging in the limbs of the gnarled trees. The footing is tricky, the mud is so thick with damp moss so as to be almost liquid.");
    SetExits( ([
        "northeast" : "/domains/northswamp/room/trash_room2",
        "north" : "/domains/northswamp/room/trash_room1.c",
      ]) );

}
void init(){
    ::init();
}
