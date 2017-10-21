#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of hold.c");
    SetLong("A sad expanse of hay bales and litter. Somehow even the rats are starving. The walls and floor are uneven simply defined by whatever space was left below the castle where a pickpocket or would-be assassin might be tossed and forgotten.");
    SetItems(([
        ({ "walls", "rock", "volcanic roock", "volcanic rock", "castle wall", "gate", "gate house", "gate wall gatehouse wall", "gatehouse wall", "gate wall" }) : "Large angular stones set with very thin lines of mortar transition from the south wall, up to an arched ceiling, and down to a matching west wall. Though the rock seems to crumble at a touch. and the grains are sharp enough to burn the skin, there is no observable dust left on the fingers nor any marking on the stone.",
        ({ "bailiff stand", "The bailiff may as well be judge and jury to anyone who has made trouble during a festival or a tourney. Penalties are rarely light, though often temporary." }) : "The bailiff may as well be judge and jury to anyone who has made trouble during a festival or a tourney. Penalties are rarely light, though often temporary",
        ({ "ring", "rings", "iron", "iron rings" }) : "The iron rings are large enough a person could reach through one without getting scraped by the piton. They show wear from hooks which are connected to the shackles of prisoners.",
      ]));
    SetExits(([
        "up" : "/domains/wangau/room/hold",
      ]));

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
