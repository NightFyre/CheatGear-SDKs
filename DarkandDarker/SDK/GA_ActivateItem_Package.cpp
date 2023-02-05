/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_ActivateItem.GA_ActivateItem_C.AbilityActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          TriggerEventData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_ActivateItem_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_ActivateItem.GA_ActivateItem_C.AbilityActivated");
		
		UGA_ActivateItem_C_AbilityActivated_Params params {};
		params.TriggerEventData = TriggerEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_ActivateItem.GA_ActivateItem_C.ExecuteUbergraph_GA_ActivateItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_ActivateItem_C::ExecuteUbergraph_GA_ActivateItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_ActivateItem.GA_ActivateItem_C.ExecuteUbergraph_GA_ActivateItem");
		
		UGA_ActivateItem_C_ExecuteUbergraph_GA_ActivateItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_ActivateItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_ActivateItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_ActivateItem.GA_ActivateItem_C");
		return ptr;
	}

}


