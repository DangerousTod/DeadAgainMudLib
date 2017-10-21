#include <lib.h>
inherit LIB_ROOM;
//       lockers1 and mangrove1 switched each other somehow.
//       My fault of course, I was sleepy.

static void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("copy of lockers1.c");
    SetLong("A grassy clearing in dense fern cover. Useable bits of armor and clothing are left here, probably to dry. A bit of fresh air finds it way here. If you need something you had better learn to just take it before you get caught looking. Whoever left these things here might be back any minute.");
    SetInventory(([
        "/domains/northswamp/armor/armored_boot_l" : 1,
        "/domains/northswamp/armor/sash" : 3,
        "/domains/northswamp/armor/armored_boot_r" : 1,
        "/domains/northswamp/armor/shield" : 1,
      ]));
    SetExits(([
        "west" : "/domains/northswamp/room/lockers1",
      ]));

}
void init(){
    ::init();
}
