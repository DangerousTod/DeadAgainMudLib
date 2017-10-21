#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Learning Center Start");
    SetLong("Welcome to DeadAgain MUD, a Dark-Souls MUD. This is the entry area safe for new players. you can look around and find a fewthings you might need sooner or later. To the east, six or seven moves away you will find a swamp that will have your first challanges. Some challenges will be too grate for you. That is part of what makes MUD games so special. You can go almost anywhere and do almost anything.");
    SetInventory(([
        "/domains/northswamp/obj/j_tree" : 3,
      ]));
    SetExits( ([
        "east" : "/domains/northswamp/room/newbie1.c",
      ]) );
    SetCoordinates("2000,2000,0");
    SetNoClean(1);
}
void init(){
    ::init();
}
