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
	 * 		Name   -> Function WB_TabMyStorage.WB_TabMyStorage_C.OnChangeActiveState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_TabMyStorage_C::OnChangeActiveState(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TabMyStorage.WB_TabMyStorage_C.OnChangeActiveState");
		
		UWB_TabMyStorage_C_OnChangeActiveState_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TabMyStorage.WB_TabMyStorage_C.BndEvt__WB_TabMyStorage_Btn_InventoryTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_TabMyStorage_C::BndEvt__WB_TabMyStorage_Btn_InventoryTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TabMyStorage.WB_TabMyStorage_C.BndEvt__WB_TabMyStorage_Btn_InventoryTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWB_TabMyStorage_C_BndEvt__WB_TabMyStorage_Btn_InventoryTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TabMyStorage.WB_TabMyStorage_C.BndEvt__WB_TabMyStorage_Btn_InventoryTab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_TabMyStorage_C::BndEvt__WB_TabMyStorage_Btn_InventoryTab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TabMyStorage.WB_TabMyStorage_C.BndEvt__WB_TabMyStorage_Btn_InventoryTab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWB_TabMyStorage_C_BndEvt__WB_TabMyStorage_Btn_InventoryTab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TabMyStorage.WB_TabMyStorage_C.ExecuteUbergraph_WB_TabMyStorage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_TabMyStorage_C::ExecuteUbergraph_WB_TabMyStorage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TabMyStorage.WB_TabMyStorage_C.ExecuteUbergraph_WB_TabMyStorage");
		
		UWB_TabMyStorage_C_ExecuteUbergraph_WB_TabMyStorage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_TabMyStorage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_TabMyStorage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_TabMyStorage.WB_TabMyStorage_C");
		return ptr;
	}

}


