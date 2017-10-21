#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of tower2.c");
    SetLong("A solemn black tower stands in the center of a courtyard. The tower is monolithic. The thick hedge has broken into the courtyard all round the tower. This place is empty save for the singing of birds. The tower has one door. It looks black as night in there.");
    SetItems( ([
      ]) );
    SetExits(([
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
