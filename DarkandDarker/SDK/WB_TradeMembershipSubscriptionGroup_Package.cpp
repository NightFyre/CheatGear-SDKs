/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TradeMembershipSubscriptionGroup.WB_TradeMembershipSubscriptionGroup_C.BndEvt__WB_TradeMembershipSubscriptionGroup_CommonBtn_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_TradeMembershipSubscriptionGroup_C::BndEvt__WB_TradeMembershipSubscriptionGroup_CommonBtn_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TradeMembershipSubscriptionGroup.WB_TradeMembershipSubscriptionGroup_C.BndEvt__WB_TradeMembershipSubscriptionGroup_CommonBtn_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWB_TradeMembershipSubscriptionGroup_C_BndEvt__WB_TradeMembershipSubscriptionGroup_CommonBtn_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TradeMembershipSubscriptionGroup.WB_TradeMembershipSubscriptionGroup_C.ExecuteUbergraph_WB_TradeMembershipSubscriptionGroup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_TradeMembershipSubscriptionGroup_C::ExecuteUbergraph_WB_TradeMembershipSubscriptionGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TradeMembershipSubscriptionGroup.WB_TradeMembershipSubscriptionGroup_C.ExecuteUbergraph_WB_TradeMembershipSubscriptionGroup");
		
		UWB_TradeMembershipSubscriptionGroup_C_ExecuteUbergraph_WB_TradeMembershipSubscriptionGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_TradeMembershipSubscriptionGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_TradeMembershipSubscriptionGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_TradeMembershipSubscriptionGroup.WB_TradeMembershipSubscriptionGroup_C");
		return ptr;
	}

}


