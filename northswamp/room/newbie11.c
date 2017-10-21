#include <lib.h>
inherit LIB_ROOM;

int readSign() {
    this_player()->more("/domains/campus/txt/warning.txt");
    return 1;
}
static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("A Sign At The Edge Of The Jungle Village");
    SetLong("A wood plank floor with a simple walkway to the jungle floor. For those who are new, this is the Point Of No Return. Read the Sign. For those who are returning, welcome home. You can rest here without any cause for alarm. Rope bridges reach into the trees.");
    SetItems(([
        "carpet" : "The carpet is purple, and somewhat institutional.",
        "floor" : "The carpet is purple, and somewhat institutional.",
        ({ "read", "Read", "read sign", "Read Sign", "Sign", "sign", "read the sign" }) : "If you pass east, past this point, Beware. You have been safe in the Jungle Village but out there you will be subject to combat, dangers, traps and being lost. Be Ware, Be Happy, Be Nice, Be a Good Friend and Be a Good Neighbor. Most importantly, remember it is a game, so HAVE FUN!",
        "corridor" : "This is a carpeted corridor, leading west.",
      ]));
    SetInventory(([
        "/domains/northswamp/obj/sign" : 1,
        "/domains/northswamp/obj/locker" : 1,
        "/domains/northswamp/obj/j_tree" : 2,
      ]));
    SetExits( ([
        "east" : "/domains/northswamp/room/sewer1",
        "west" : "/domains/northswamp/room/newbie7",
        "south" : "/domains/northswamp/room/newbie10.c",
      ]) );
    SetProperty("no attack", 1);
}
int CanReceive(object ob) {
    if(ob && ob->GetRace() == "rodent"){
        message("info","You are repelled by rodenticide.",ob);
        return 0;
    }
    return ::CanReceive(ob);
}
void init(){
    ::init();
}
