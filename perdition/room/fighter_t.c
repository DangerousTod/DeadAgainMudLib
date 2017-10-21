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
    SetShort("the Hall of Fighters");
    SetLong("The Great Hall of Fighters was constructed many ages ago to "
      "act as a meeting place for all the fighters who come through "
      "Ylsrim.  In addition, it serves as a place to recruit new "
      "fighters into the fold.  A magnificent oak door stands north.");
    SetInventory(([ "/domains/perdition/npc/roshd" : 1 ]));
    SetItems( ([
        ({ "meeting","room","hall","fighter hall" }) : 
        "New adventurers may become fighters here.",
      ]) );
    SetExits( ([
        "east" : "/domains/perdition/room/fighter_e",
        "west" : "/domains/perdition/room/city_street2.c",
      ]) );
    //SetListen("default","Sounds of old veterans recalling battles of "
    //        "the past can be heard being told.");
}

int CheckFighter(string dir) {
    object ob;
    if( this_player()->ClassMember("fighter") ||
      creatorp(this_player()) ) return 1;
    if( ob = present("fighter", this_object()) ) {
        ob->eventForce("speak I cannot allow you to enter the halls of the warriors");
        return 0;
    }
    else return 1;
}

void init(){
    ::init();
}
