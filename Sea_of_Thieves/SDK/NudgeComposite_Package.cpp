/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UNudgeFromExplosionsPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNudgeFromExplosionsPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NudgeComposite.NudgeFromExplosionsPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNudgeFromShipCollisionPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNudgeFromShipCollisionPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NudgeComposite.NudgeFromShipCollisionPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042108C0
	 * 		Name   -> Function NudgeComposite.NudgeFromStormPolicy.IncrementTimer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNudgeFromStormPolicy::IncrementTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NudgeComposite.NudgeFromStormPolicy.IncrementTimer");
		
		UNudgeFromStormPolicy_IncrementTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNudgeFromStormPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNudgeFromStormPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NudgeComposite.NudgeFromStormPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNudgeFromWaterLevelPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNudgeFromWaterLevelPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NudgeComposite.NudgeFromWaterLevelPolicy");
		return ptr;
	}

}


