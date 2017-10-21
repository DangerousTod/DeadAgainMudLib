/*    /domains/Ylsrim/room/fighter.c
 *    from the Dead Souls Object Library
 *    created by Descartes of Borg 960512
 */

#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetNoClean(1);
    SetTown("Ylsrim");
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("Fighter Hall");
    SetLong("Gladiators have chosen a dangerous path of extreme skill with blades though they wear little or no armor. All fighters are welcome here. Fighters gather here to drink, boast, and train. They also leave helpful weapons and items here for each other, because they know this is a sanctuary from the loss of objects when the world renews itself.");
    SetItems(([
        ({ "ceiling", "roof", "up" }) : "A circular fresco of the endless creation of the realms circles an arcitectural eye, blindingly bright sunlight cuts in through this apeture.",
      ]));
    SetExits( ([
        "south" : "/domains/north/room/gladiator_hall.c",
      ]) );
    SetDoor( "south", "/domains/north/etc/gladiator_door.c");
    SetNoClean(1);
    SetPersistent(1);
    RestoreObject();
}

void init(){
    ::init();
}
