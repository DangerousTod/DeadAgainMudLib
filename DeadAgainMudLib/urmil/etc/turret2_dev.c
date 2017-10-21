#include <lib.h>
inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("copy of turret1.c");
    SetLong("The gate control is here. Narrow windows allow a view of soldiers guarding the North Gate.");
    SetItems(([
        ({"guards","soldiers"}) : "Rough looking gentlement, well equiped and highly aware.",
        ({"banners"}) : "Festive decorations on a commonplace day.",
      ]));
    SetExits(([
        "southwest" : "/domains/urmil/room/turret1",
      ]));

}
void init(){
    ::init();
}

mixed direct_open_obj_with_obj(object target, object tool){
	return CanOpen(this_player(), tool);
}



