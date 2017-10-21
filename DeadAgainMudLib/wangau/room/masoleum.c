#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of terrace2.c");
    SetLong("The royal masoleum holds four main crypts, two sephulcres of bones, a fountain and urns heaped with raw earth. A beautified gate leads to a terrace at the south, a dry grey door seeming to be of stone leads to the east and a mighty door of carved oak leads to the north.");
    SetExits( ([
        "north" : "/domains/wangau/room/question_hall",
        "south" : "/domains/wangau/room/terrace2",
        "east" : "/domains/wangau/room/penitent_hall.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
