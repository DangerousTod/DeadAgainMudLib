#include <lib.h>
#include <climb.h>
#include <position.h>

inherit LIB_CHAMBER;
inherit LIB_CLIMB;

varargs mixed ClimbMe(mixed args...){
    return 1;
}

static void create() {
    ::create();
    SetKeyName("tree");
    SetId(({"oak"}));
    SetAdjectives(({"large"}));
    SetShort("a large tree");
	SetLong("This is a very old tree. It is broad and strong, so large three or four people might reach around. The ropes and planks of the jungle village swing from it mighty limbs.");
    SetChamberInterior("You are among the sturdy branches of "+
		"the large trees of the Jungle Village.");
    SetRace("tree");
    SetPacifist(1);
    SetPosition(POSITION_NULL);
    SetMelee(0);
    SetNoClean(1);
    SetMount(1);
    SetMountStyle("driven");
    SetVisibleRiders(0);
    SetOpacity(0);
    SetMaxHealthPoints(20);
    SetMaxCarry(30000);
    SetNoCondition(1);
    SetAttackable(0);
    SetClimb( (: ClimbMe :), CLIMB_DOWN );
    SetClimb( (: ClimbMe :), CLIMB_OUT );
    SetClimb( (: ClimbMe :), CLIMB_UP );
    SetClimb( (: ClimbMe :), CLIMB_INTO );
    SetClimb( (: ClimbMe :), CLIMB_THROUGH );
}

void init(){
    ::init();
}

varargs mixed eventClimb(object who, int type, string where){
    mixed ret;
    switch(type){
        case CLIMB_DOWN:
            ret = eventDismount(who);
            break;
        case CLIMB_OUT:
            ret = eventDismount(who);
            break;
        default :
            ret = eventMount(who);
            break;
    }
    return ret;
}
