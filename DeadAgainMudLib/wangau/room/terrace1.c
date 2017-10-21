#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of church5.c");
    SetLong("An outdoor stone terrace connecting to the cathedral at the east end and to another stone terrace at it northwest corner. At the northwest corner also happens to be a dangerous looking pit dropping deep into the bowels of Wangau. For the royal family, on a celebration day, this outdoor walk in rain or shine is a reminder of humanity, often enough it is simply a place to enjoy the fresh air. Below the terrace, if one were to step off the edge to the south is a terrifying fall to the valley below.");
    SetExits( ([
        "east" : "/domains/wangau/room/church5",
        "northwest" : "/domains/wangau/room/terrace2.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
