#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Jungle Village");
    SetLong("A practice area in a jungle where there are no hostile monsters. Monsters can be human, and often are. They are called NPC's. That stands for Non Player Character.");
    SetInventory(([
        "/domains/northswamp/obj/j_tree" : 1,
      ]));
    SetExits( ([
        "east" : "/domains/northswamp/room/newbie6",
        "north" : "/domains/northswamp/room/newbie2.c",
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
