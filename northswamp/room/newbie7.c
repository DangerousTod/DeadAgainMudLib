#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Jungle Village");
    SetLong("This is a rope bridge across a safe area in the MUD to learn about moving from room to room and maybe make a friend or two. You cannot fight here.");
    SetInventory(([
        "/domains/northswamp/obj/j_tree" : 1,
      ]));
    SetExits( ([
        "south" : "/domains/northswamp/room/newbie8",
        "east" : "/domains/northswamp/room/newbie11",
        "west" : "/domains/northswamp/room/newbie4.c",
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
