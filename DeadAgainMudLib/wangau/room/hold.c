#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of muster5.c");
    SetLong("A bailiff stand dominates this room. A wall in set with dozens of iron rings, presumably for hanging temporary prisoners. Inocuous seeming doors lead east and west. A third door provides a pleasentview of the muster. An ominous looking staircase descends from this room to a dungeon.");
    SetItems(([
        ({ "bailiff stand", "The bailiff may as well be judge and jury to anyone who has made trouble during a festival or a tourney. Penalties are rarely light, though often temporary." }) : "The bailiff may as well be judge and jury to anyone who has made trouble during a festival or a tourney. Penalties are rarely light, though often temporary",
        ({ "ring", "rings", "iron", "iron rings" }) : "The iron rings are large enough a person could reach through one without getting scraped by the piton. They show wear from hooks which are connected to the shackles of prisoners.",
      ]));
    SetExits( ([
        "south" : "/domains/wangau/room/muster5",
        "east" : "/domains/wangau/room/lances",
        "down" : "/domains/wangau/room/dungeon",
        "west" : "/domains/wangau/room/carnival1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
