#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil's Eyes In The Sky");
    SetLong("A watchtower over Urmil. The watch tower stands on the east wall. A panoramic view can be had here.");
    SetItems(([
        ({ "view", "panorama", "look view", "look panorama", "panoramic view", "have panoramic view" }) : "Mountains rim the east and south, smoke stains the distant east. Mountains, taller and blacker rise above to the southeast. Beyond the western desert, through the streaking trails of storms are scratch marks on the horizon which could represent distant land, or perhaps mighty ships. The jungles to the north, seeming endless from lesser vantage points, end abruptly at a saphirre mountain.",
      ]));

    SetExits(([
        "down" : "/domains/urmil/room/watchtower1",
      ]));

}
void init(){
    ::init();
}
