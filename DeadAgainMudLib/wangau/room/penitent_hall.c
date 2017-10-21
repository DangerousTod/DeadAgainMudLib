#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of masoleum.c");
    SetLong("This is the penitents' hall. Nobles are rarely admitted to the family tomb, a few may come near it. In this room are grisly freizes of life and undeath on every wall. Above is a brilliant taxidermist's owl. In the centor of the room is a simple granite cube. Fine oak doors lead north, east, and south.");
    SetExits( ([
        "north" : "/domains/wangau/room/redroom",
        "east" : "/domains/wangau/room/goldroom",
        "west" : "/domains/wangau/room/masoleum",
        "south" : "/domains/wangau/room/ivoryroom.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
