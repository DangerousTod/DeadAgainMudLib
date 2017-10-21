#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Mangrove Swamp");
    SetLong("A dense marsh is all around. The water is cool, swift moving beneath a thick aqua skin. The limbs of the mangrove trees link together above and the roots intertwine below. A unwholesome scene is to the north. Heavy stones are piled in a roughly circular fashion high enough to stand upright within. Skulls and other totems of bane or murder hang from the boughs of the mangroves around the crude fortress. To the south and east is peacful swamp.");
    SetInventory(([
        "/lib/std/corpse" : 2,
      ]));
    SetExits( ([
        "north" : "/domains/northswamp/room/orc_fortress",
        "south" : "/domains/northswamp/room/lockers1",
        "east" : "/domains/northswamp/room/mangrove3.c",
      ]) );

}
void init(){
    ::init();
}
