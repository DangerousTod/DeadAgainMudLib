#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Jungle Villiage");
    SetLong("Planks ring a tree. Rope bridges run from tree to tree. You can grab, get, pick up or take something if you see it lying around somewhere. You never know when something will come in handy later on.");
    SetInventory(([
        "/domains/northswamp/obj/j_tree" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/northswamp/room/newbie9",
        "east" : "/domains/northswamp/room/newbie10",
        "west" : "/domains/northswamp/room/newbie5",
        "north" : "/domains/northswamp/room/newbie7.c",
      ]) );
    SetProperty("no attack", 1);
}
int CanReceive(object ob){
    if(ob && ob->GetRace() == "rodent"){
        message("info","You are repelled by rodenticide.",ob);
        if(!environment(ob) && interactive(ob)) ob->eventMove(ROOM_START);
        return 0;
    }
    return ::CanReceive(ob);
}
void init(){
    ::init();
}
