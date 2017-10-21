//       a simple mod to check orc
//       the intent is a developement 
//       of a non-class based system
//       non-attack will be applied
//       on a token based system
//       essentially, one must fight one's 
//       way in.
//       Vulture 01-06-17 DeadAgain MUD
//       A Dead-Souls LPMud
#include ROOMS_H
#include <lib.h>

inherit LIB_SENTIENT;
	static private string *exempted = ({ "orc","ogre","troll","dog","rodent","vulture","klingon" });

int CheckFoul(mixed val) {
	if(!val) return 0;
	if(!objectp(val)) return 0;
	if(creatorp(val)) return 0;
	if(member_array(val->GetRace(),exempted) !=-1) return 0;
		eventForce("attack "+val->GetKeyName());
}
