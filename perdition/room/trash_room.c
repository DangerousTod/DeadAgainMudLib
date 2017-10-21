#include <lib.h>
#include "/realms/vulture/area/customdefs.h"

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
     SetShort("Garbage Dump In The Swamp");
      SetLong("Mounds of garbage are stacked up on small wooded islands "
              "in the swamp. So much trash is here. It cannot be described.");
}
void init(){
    ::init();
}
