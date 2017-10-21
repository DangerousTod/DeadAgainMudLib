#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(15);
    SetShort("The Orc Fortress");
	SetLong("You find yourself in the entrance of the local orc stronghold. This place seems quite hostile to normal sensibilities, as the construction is rough, inelegant, and the upkeep is squalid. The stone walls, though formidible, are loosely stacked as if simply flopped one on top of the last. There is an exit to the south of here, and another room is visible to the west.");
    SetExits( ([
		"south" : "/domains/northswamp/room/mangrove2",
		"west" : "/domains/northswamp/room/orc_temple.c",
                ]) );
    SetSmell( ([ "default" : "The stench of garbage and animal waste hangs here."]) );
    SetInventory(([
		"/domains/northswamp/npc/orc" : 1,
		"/domains/northswamp/npc/orc2" : 1,
		"/domains/northswamp/npc/orc_boss" : 1,
                ]));
}
void init(){
    ::init();
}
