#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Jungle Village");
    SetLong("A meeting place in the village. you will make lots of friends here, justget comfortable. They will be here.");
    SetInventory(([
        "/domains/northswamp/obj/j_tree" : 4,
      ]));
    SetExits( ([
//     a monkey bridge will connect to the library
//     the library will also be a non combat zone
        "south" : "/domains/northswamp/room/newbie6",
        "east" : "/domains/northswamp/room/newbie8",
        "west" : "/domains/northswamp/room/newbie2",
        "north" : "/domains/northswamp/room/newbie4.c",
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
