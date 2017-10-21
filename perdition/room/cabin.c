#include <lib.h>

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("A Rustic Cabin In The Swamp");
    SetLong("A cabin in the swamp. It looks like the home of a hermit. A pile of blankets serve as a sleeping place. Several small bottles sit on a flat stone beside a small fire. Heaped up rubbish and junk partially disguise an exit to the west while a hole in the north walls serves to illuminate the place and as an exit.");
    SetItems(([
        ({ "bottles", "tiny bottles" }) : "Small bottles with a weird substance inside. They aren't marked poison or anything...",
        ({ "rubbish", "junk", "Piled up amounts of found items such as bits of cloth, broken tiles, twisted lengths of corroded wire and such." }) : "Piled up amounts of found items such as bits of cloth, broken tiles, twisted lengths of corroded wire and such",
        "flat stone" : "A stone used for cooking and eating. Small bottles are often found there.",
      ]));
    SetInventory(([
        "/domains/perdition/npc/spider" : 3,
        "/domains/perdition/obj/potionh" : 4,
      ]));
    SetExits( ([
        "west" : "/domains/perdition/room/trash_room2",
        "north" : "/domains/perdition/room/slime_room1.c",
      ]) );

}
void init(){
    ::init();
}
