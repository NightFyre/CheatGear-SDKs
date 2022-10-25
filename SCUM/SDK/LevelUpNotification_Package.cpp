/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function LevelUpNotification.LevelUpNotification_C.GetLevelUpAnimation
	 * 		Flags  -> ()
	 */
	class UWidgetAnimation* ULevelUpNotification_C::GetLevelUpAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelUpNotification.LevelUpNotification_C.GetLevelUpAnimation");
		
		ULevelUpNotification_C_GetLevelUpAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelUpNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelUpNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelUpNotification.LevelUpNotification_C");
		return ptr;
	}

}


