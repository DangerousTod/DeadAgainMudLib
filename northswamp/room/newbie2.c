#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Jungle Village");
    SetLong("It is sad to say, but out there you will be on your own. You will get tired, you will get hungry, you will get injured too. You might have to 'search corpse' now and then to get enough cash to survive.");
    SetInventory(([
        "/domains/northswamp/obj/chest2" : 1,
        "/domains/northswamp/obj/j_tree" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/northswamp/room/newbie3",
        "east" : "/domains/northswamp/room/newbie5",
        "north" : "/domains/northswamp/room/newbie1.c",
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
