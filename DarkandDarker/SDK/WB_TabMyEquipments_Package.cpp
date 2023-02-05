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
	 * 		Name   -> Function WB_TabMyEquipments.WB_TabMyEquipments_C.OnChangeActiveState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_TabMyEquipments_C::OnChangeActiveState(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TabMyEquipments.WB_TabMyEquipments_C.OnChangeActiveState");
		
		UWB_TabMyEquipments_C_OnChangeActiveState_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TabMyEquipments.WB_TabMyEquipments_C.BndEvt__WB_TabMyEquipments_Btn_InventoryTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_TabMyEquipments_C::BndEvt__WB_TabMyEquipments_Btn_InventoryTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TabMyEquipments.WB_TabMyEquipments_C.BndEvt__WB_TabMyEquipments_Btn_InventoryTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWB_TabMyEquipments_C_BndEvt__WB_TabMyEquipments_Btn_InventoryTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TabMyEquipments.WB_TabMyEquipments_C.BndEvt__WB_TabMyEquipments_Btn_InventoryTab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_TabMyEquipments_C::BndEvt__WB_TabMyEquipments_Btn_InventoryTab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TabMyEquipments.WB_TabMyEquipments_C.BndEvt__WB_TabMyEquipments_Btn_InventoryTab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWB_TabMyEquipments_C_BndEvt__WB_TabMyEquipments_Btn_InventoryTab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TabMyEquipments.WB_TabMyEquipments_C.ExecuteUbergraph_WB_TabMyEquipments
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_TabMyEquipments_C::ExecuteUbergraph_WB_TabMyEquipments(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TabMyEquipments.WB_TabMyEquipments_C.ExecuteUbergraph_WB_TabMyEquipments");
		
		UWB_TabMyEquipments_C_ExecuteUbergraph_WB_TabMyEquipments_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_TabMyEquipments_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_TabMyEquipments_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_TabMyEquipments.WB_TabMyEquipments_C");
		return ptr;
	}

}


