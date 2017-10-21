#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Urmil City");
    SetLong("The looming pyramid chills the air of the gay crowd. A man in a brilliantly decorated paper mask guards the enterance. To the east is a city garden and to the west is a bazaar.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits( ([
        "north" : "/domains/urmil/room/n_gate2",
        "east" : "/domains/urmil/room/garden",
        "west" : "/domains/urmil/room/shops2",
        "south" : "/domains/urmil/room/pyramid_entrance.c",
      ]) );

}
void init(){
    ::init();
}
