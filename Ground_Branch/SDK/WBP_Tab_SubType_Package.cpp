/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_Tab_SubType.WBP_Tab_SubType_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Tab_SubType_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_SubType.WBP_Tab_SubType_C.Construct");
		
		UWBP_Tab_SubType_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_SubType.WBP_Tab_SubType_C.BndEvt__Button_Item_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Tab_SubType_C::BndEvt__Button_Item_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_SubType.WBP_Tab_SubType_C.BndEvt__Button_Item_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Tab_SubType_C_BndEvt__Button_Item_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_SubType.WBP_Tab_SubType_C.IconLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Tab_SubType_C::IconLoaded(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_SubType.WBP_Tab_SubType_C.IconLoaded");
		
		UWBP_Tab_SubType_C_IconLoaded_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_SubType.WBP_Tab_SubType_C.InternalOnSelected
	 * 		Flags  -> ()
	 */
	void UWBP_Tab_SubType_C::InternalOnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_SubType.WBP_Tab_SubType_C.InternalOnSelected");
		
		UWBP_Tab_SubType_C_InternalOnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_SubType.WBP_Tab_SubType_C.ExecuteUbergraph_WBP_Tab_SubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Tab_SubType_C::ExecuteUbergraph_WBP_Tab_SubType(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_SubType.WBP_Tab_SubType_C.ExecuteUbergraph_WBP_Tab_SubType");
		
		UWBP_Tab_SubType_C_ExecuteUbergraph_WBP_Tab_SubType_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_SubType.WBP_Tab_SubType_C.OnItemCategorySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetType                           ItemAssetType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Tab_SubType_C::OnItemCategorySelected__DelegateSignature(const struct FPrimaryAssetType& ItemAssetType, const class FName& SubType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_SubType.WBP_Tab_SubType_C.OnItemCategorySelected__DelegateSignature");
		
		UWBP_Tab_SubType_C_OnItemCategorySelected__DelegateSignature_Params params {};
		params.ItemAssetType = ItemAssetType;
		params.SubType = SubType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Tab_SubType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Tab_SubType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Tab_SubType.WBP_Tab_SubType_C");
		return ptr;
	}

}


