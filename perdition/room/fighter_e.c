/*    /domains/Ylsrim/room/fighter.c
 *    from the Dead Souls Object Library
 *    created by Descartes of Borg 960512
 */

#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetNoClean(1);
    SetClimate("indoors");
    SetAmbientLight(40);
    SetShort("the interior chamber of the Hall of Fighters");
    SetLong("Fighters gather here to drink, boast, and train. They also "
      "leave helpful weapons and items here for each other, because "
      "they know this is a sanctuary from the loss of objects when "
      "the world renews itself.");
    SetExits( ([
        "north" : "/domains/perdition/room/fighter_join",
        "west" : "/domains/perdition/room/fighter_t.c",
      ]) );
    SetInventory( ([
        "/domains/perdition/obj/cask" : ({ 900, 1 }),
        "/domains/perdition/npc/segata" : ({ 300, 1 }),
      ]) );
    SetDoor( "north", "/domains/perdition/doors/fighter_door.c");
    SetNoClean(1);
    SetPersistent(1);
    RestoreObject();
}

void init(){
    ::init();
}
