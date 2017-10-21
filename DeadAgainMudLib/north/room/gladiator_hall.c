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
    SetTown("Ylsrim");
    SetClimate("indoors");
    SetAmbientLight(27);
    SetShort("Gladiators' Hall, a Hall of Fighters");
    SetLong("The Gladiator Hall sits on a pyramid only a few feet tall. The stones are glowing white and rounded by the tread of ages of gladiators going into the world. Each step is marked with a word.");
    SetItems(([
        ({ "word", "words", "step", "steps", "read word", "read words", "read step", "read steps" }) : "The words of the Truth of the Gladiator Way are: VERTIS, RABBAS, UTO, PIZ, ANAXAHA, FORVE, MUNG",
        ({ "meeting", "room", "hall", "fighter hall" }) : "New adventurers may become fighters here.",
      ]));
	SetInventory( ([ "/domains/north/npc/oort.c" : 1 ]) );
    SetExits( ([
        "south" : "/domains/north/room/gladiator1",
        "north" : "/domains/north/room/gladiator.c",
      ]) );
    SetDoor( "north", "/domains/north/etc/gladiator_door");
    //SetListen("default","Sounds of old veterans recalling battles of "
    //        "the past can be heard being told.");
}

int CheckFighter(string dir) {
    object ob;
    if( this_player()->ClassMember("fighter") ||
      creatorp(this_player()) ) return 1;
    if( ob = present("fighter", this_object()) ) {
		ob->eventForce("I shall prevent you from entering the hall "
			"of the gladiators.");
        return 0;
    }
    else return 1;
}

void init(){
    ::init();
}
