/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamageSource_Skill_Operative_Drone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageSource_Skill_Operative_Drone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_Skill_Operative_Drone.DamageSource_Skill_Operative_Drone_C");
		return ptr;
	}

}


