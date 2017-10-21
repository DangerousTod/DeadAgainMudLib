#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of grandstand3.c");
    SetLong("This is by far the roudiest place in courtyards during a tournament. Traditionally so rough and drunken that it is covered with a tent and barely monitored. Aquavits and smoking oils are peddled here. Occassionally, if news from the rink is bad, gamblers with duel to the death only to be crushed underfoot by the drunken mob. In the bloodied smoke-stained western wall is a squarish door never opened to the public.");
    SetExits( ([
        "east" : "/domains/wangau/room/grandstand3",
        "west" : "/domains/wangau/room/whisper1.c",
      ]) );

    SetInventory(([
      ]));

}

void init(){
    ::init();
}
