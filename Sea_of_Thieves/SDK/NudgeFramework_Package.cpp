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
	 * 		Name   -> PredefinedFunction UNudgeInterpolationParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNudgeInterpolationParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NudgeFramework.NudgeInterpolationParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNudgeableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNudgeableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NudgeFramework.NudgeableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNudgePolicyInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNudgePolicyInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NudgeFramework.NudgePolicyInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNudgePolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNudgePolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NudgeFramework.NudgePolicy");
		return ptr;
	}

}


