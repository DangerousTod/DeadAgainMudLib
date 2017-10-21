#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("copy of newbie2.c");
    SetLong("You are in an east-west corridor.");
    SetInventory(([
        "/domains/northswamp/obj/j_tree" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/northswamp/room/newbie2",
        "east" : "/domains/northswamp/room/newbie4",
        "west" : "/domains/northswamp/room/start.c",
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
