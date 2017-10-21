#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Corridor");
    SetLong("You are in an east-west corridor.");
    SetInventory(([
        "/domains/northswamp/obj/note" : 5,
        "/domains/northswamp/obj/worn_storage" : 3,
        "/domains/northswamp/obj/j_tree" : 1,
        "/domains/northswamp/obj/bushel" : 4,
      ]));
    SetExits( ([
        "south" : "/domains/northswamp/room/newbie5",
        "east" : "/domains/northswamp/room/newbie7",
        "west" : "/domains/northswamp/room/newbie1.c",
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
