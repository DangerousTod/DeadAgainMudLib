#include <terrain_types.h>
#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("%^GREEN%^Red Dragon's Den%^RESET%^");
    SetLong("Perhaps this was a serious mistake. Bones are piled up all around. This is certainly the home of a dragon.");
    SetInventory(([
        "/domains/urmil/armor/punch" : 2,
        "/domains/urmil/weap/battleaxe" : 1,
        "/domains/northswamp/weap/cutlass" : 1,
        "/domains/north/obj/chest2" : 2,
        "/domains/north/npc/dragon" : 1,
      ]));
    SetExits( ([
        "up" : "/domains/north/room/splinter1.c",
      ]) );

}
void init(){
    ::init();
}
