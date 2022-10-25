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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Fire.Proj_Drone_VDayHeart_Fire_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Fire_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Fire.Proj_Drone_VDayHeart_Fire_C.UserConstructionScript");
		
		AProj_Drone_VDayHeart_Fire_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Drone_VDayHeart_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Drone_VDayHeart_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Drone_VDayHeart_Fire.Proj_Drone_VDayHeart_Fire_C");
		return ptr;
	}

}


