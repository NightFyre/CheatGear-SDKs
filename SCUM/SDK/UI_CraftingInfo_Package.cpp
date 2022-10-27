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
	 * 		Name   -> Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInfo_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties");
		
		UUI_CraftingInfo_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInfo.UI_CraftingInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.Construct");
		
		UUI_CraftingInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInfo_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CraftingInfo_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInfo.UI_CraftingInfo_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       itemCDO                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInfo_C::Init(class AItem* itemCDO)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.Init");
		
		UUI_CraftingInfo_C_Init_Params params {};
		params.itemCDO = itemCDO;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInfo_C::ExecuteUbergraph_UI_CraftingInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo");
		
		UUI_CraftingInfo_C_ExecuteUbergraph_UI_CraftingInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingInfo.UI_CraftingInfo_C");
		return ptr;
	}

}


