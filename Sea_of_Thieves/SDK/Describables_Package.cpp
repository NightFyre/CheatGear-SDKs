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
	 * 		RVA    -> 0x013D7920
	 * 		Name   -> Function Describables.DescribableComponent.SetTooltipActive
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescribableComponent::SetTooltipActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Describables.DescribableComponent.SetTooltipActive");
		
		UDescribableComponent_SetTooltipActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013D7900
	 * 		Name   -> Function Describables.DescribableComponent.OnRep_TooltipActive
	 * 		Flags  -> (Final, RequiredAPI, Native, Private)
	 */
	void UDescribableComponent::OnRep_TooltipActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Describables.DescribableComponent.OnRep_TooltipActive");
		
		UDescribableComponent_OnRep_TooltipActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDescribableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDescribableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Describables.DescribableComponent");
		return ptr;
	}

}


