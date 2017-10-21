#include <lib.h>
#include ROOMS_H
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Jungle Villiage");
    SetLong("The jungle floor is many feet below. Look at things you might find interesting. Type 'look at rope bridge' you will see what I mean.");
    SetItems(([
        ({ "bridge", "rope bridge", "monkey bridge", "monkeybridge" }) : "Springy ropes are lashed together to hang a swinging, semi-safe bridge between distant trees. If one rope breaks, there are always two more!",
      ]));
    SetInventory(([
        "/domains/northswamp/obj/j_tree" : 1,
      ]));
    SetExits( ([
        "north" : "/domains/northswamp/room/newbie8",
        "northeast" : "/domains/northswamp/room/newbie10",
        "west" : "/domains/northswamp/room/newbie6.c",
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
