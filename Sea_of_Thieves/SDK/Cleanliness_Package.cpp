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
	 * 		Name   -> PredefinedFunction UCleanlinessInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCleanlinessInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cleanliness.CleanlinessInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCleanlinessTransferInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCleanlinessTransferInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cleanliness.CleanlinessTransferInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AFB1C0
	 * 		Name   -> Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCleanlinessComponent::OnRep_CleanlinessInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo");
		
		UCleanlinessComponent_OnRep_CleanlinessInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCleanlinessComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCleanlinessComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cleanliness.CleanlinessComponent");
		return ptr;
	}

}


