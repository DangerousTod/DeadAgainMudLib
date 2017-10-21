#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Jungle Village");
    SetLong("A long rope bridge dangles from east to west. A second rope bridge is tied in the center, running north. It is very wobbly.");
    SetExits( ([
        "north" : "/domains/northswamp/room/newbie5",
        "east" : "/domains/northswamp/room/newbie9",
        "west" : "/domains/northswamp/room/newbie3.c",
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
