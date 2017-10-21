#include <lib.h>

inherit LIB_SENTIENT;
static void create() {
    ::create();
    SetKeyName("orc");
    SetId(({"orc"}));
    SetAdjectives(({"dirty"}));
    SetShort("a dirty orc");
    SetLong("This orc is typical of its breed: nasty, brutish, and short. It appears "
            "to be a juvenile or adolescent, making it somewhat less "
            "dangerous but more hostile. ");
    SetLevel(1);
    SetRace("orc");
    SetGender("male");
    SetMaxHealthPoints(100);
}
void init(){
    ::init();
}
