/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotification.BP_GameplayNotification_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_GameplayNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotification.BP_GameplayNotification_C.Construct");
		
		UBP_GameplayNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotification.BP_GameplayNotification_C.WidgetAnimationEvt_Anim_Timeout_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_GameplayNotification_C::WidgetAnimationEvt_Anim_Timeout_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotification.BP_GameplayNotification_C.WidgetAnimationEvt_Anim_Timeout_K2Node_WidgetAnimationEvent_1");
		
		UBP_GameplayNotification_C_WidgetAnimationEvt_Anim_Timeout_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotification.BP_GameplayNotification_C.ExecuteUbergraph_BP_GameplayNotification
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameplayNotification_C::ExecuteUbergraph_BP_GameplayNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotification.BP_GameplayNotification_C.ExecuteUbergraph_BP_GameplayNotification");
		
		UBP_GameplayNotification_C_ExecuteUbergraph_BP_GameplayNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GameplayNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GameplayNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GameplayNotification.BP_GameplayNotification_C");
		return ptr;
	}

}


