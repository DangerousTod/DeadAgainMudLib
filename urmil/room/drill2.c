#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil Guard Proving Ground");
    SetLong("The city guard drills here. To the west is a turret connecting the north and west city walls. to the south and the southeast are the proving grounds.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "south" : "/domains/urmil/room/drill5",
        "east" : "/domains/urmil/room/drill1",
        "southeast" : "/domains/urmil/room/drill4",
        "west" : "/domains/urmil/room/turret4.c",
      ]) );

}
void init(){
    ::init();
}
