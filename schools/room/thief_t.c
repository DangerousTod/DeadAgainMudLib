/*    /domains/Ylsrim/room/fighter_hall
 *    from the Dead Souls Object Library
 *    created by Descartes of Borg 960512
 */

#include <lib.h>

inherit LIB_ROOM;

int CheckFighter(string dir);

static void create() {
    room::create();
    SetNoClean(1);
    SetClimate("indoors");
    SetAmbientLight(27);
    SetShort("the Flamenco Flamingo");
    SetLong("The Flamingo burned down ages ago. It was a beautiful five story hotel saving wanderers from all of the realms with warmth and kindness. This here that you stand in, was once part of the Flamingo. Now, being that the rest so tragically burned away, it is in fact The Flamenco Flamingo, proprietor one Bartolozzi Luigi Lugosse, A.K.A. Bernie. Sometimes you can get a Samich here, sometimes not. There are a few table and just a few more chairs than tables. Everyone seems to have the day off. A shadowy looking character lingers in the shadows near a shadowy pass-thru. The front door is west.");
    SetInventory(([
        "/domains/schools/npc/bernie" : 1,
      ]));
    SetExits( ([
        "east" : "/domains/schools/room/thieves_hall.c", 
      ]) );
    //SetListen("default","Sounds of old veterans recalling battles of "
    //        "the past can be heard being told.");
}

int CheckThief(string dir) {
    object ob;
    if( this_player()->ClassMember("thief") ||
      creatorp(this_player()) ) return 1;
    if( ob = present("thief", this_object()) ) {
        ob->eventForce("speak Step back, son. This is a restricted area.");
        return 0;
    }
    else return 1;
}

void init(){
    ::init();
}
