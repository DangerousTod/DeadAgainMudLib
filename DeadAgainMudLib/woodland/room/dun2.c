#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Ogre Dungeon");
    SetLong("Chains hang from the walls suspisciously close to very heavy weights. Those weights happen to have shackles attached to them. Between the shackles and weights is nearly an armspan and a half. The purpose of these chains and weights seem clearly torture.");
    SetExits( ([
        "north" : "/domains/woodland/room/dun1",
        "south" : "/domains/woodland/room/dun3.c",
      ]) );

}
void init(){
    ::init();
}
