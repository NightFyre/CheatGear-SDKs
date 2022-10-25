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
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.GetVisibilityForLoadAndSaveElements
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_Button_Preset_C::GetVisibilityForLoadAndSaveElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.GetVisibilityForLoadAndSaveElements");
		
		UWBP_Button_Preset_C_GetVisibilityForLoadAndSaveElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.IsValidKitAssetList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InLoadoutName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UVaRestJsonObject*                           KitJsonObj                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Preset_C::IsValidKitAssetList(const class FName& InLoadoutName, class UVaRestJsonObject* KitJsonObj, bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.IsValidKitAssetList");
		
		UWBP_Button_Preset_C_IsValidKitAssetList_Params params {};
		params.InLoadoutName = InLoadoutName;
		params.KitJsonObj = KitJsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.GetItemTypeButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TypeAsString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UWBP_Button_Item_C*                          OutButtonitem                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Preset_C::GetItemTypeButton(const class FString& TypeAsString, class UWBP_Button_Item_C** OutButtonitem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.GetItemTypeButton");
		
		UWBP_Button_Preset_C_GetItemTypeButton_Params params {};
		params.TypeAsString = TypeAsString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutButtonitem != nullptr)
			*OutButtonitem = params.OutButtonitem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.GetDisplayNamePresetColorAndOpacity
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWBP_Button_Preset_C::GetDisplayNamePresetColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.GetDisplayNamePresetColorAndOpacity");
		
		UWBP_Button_Preset_C_GetDisplayNamePresetColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.GetButtonPresetToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_Button_Preset_C::GetButtonPresetToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.GetButtonPresetToolTipWidget");
		
		UWBP_Button_Preset_C_GetButtonPresetToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.GenerateJsonDataEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           OutDataEntry                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Preset_C::GenerateJsonDataEntry(class UVaRestJsonObject** OutDataEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.GenerateJsonDataEntry");
		
		UWBP_Button_Preset_C_GenerateJsonDataEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDataEntry != nullptr)
			*OutDataEntry = params.OutDataEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.AddItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           InJsonObj                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOutDataAdded                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Preset_C::AddItemData(class UVaRestJsonObject* InJsonObj, bool* bOutDataAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.AddItemData");
		
		UWBP_Button_Preset_C_AddItemData_Params params {};
		params.InJsonObj = InJsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutDataAdded != nullptr)
			*bOutDataAdded = params.bOutDataAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.GetPresetDisplayName
	 * 		Flags  -> ()
	 */
	class FText UWBP_Button_Preset_C::GetPresetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.GetPresetDisplayName");
		
		UWBP_Button_Preset_C_GetPresetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Preset_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.PreConstruct");
		
		UWBP_Button_Preset_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Button_Preset_C_BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetSelected_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DisplayString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UVaRestJsonObject*                           JsonObj                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Preset_C::OnPresetSelected_Event_1(const class FString& DisplayString, const class FString& Filename, class UVaRestJsonObject* JsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetSelected_Event_1");
		
		UWBP_Button_Preset_C_OnPresetSelected_Event_1_Params params {};
		params.DisplayString = DisplayString;
		params.Filename = Filename;
		params.JsonObj = JsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.Construct");
		
		UWBP_Button_Preset_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.OnSaveClicked_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::OnSaveClicked_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.OnSaveClicked_Event_1");
		
		UWBP_Button_Preset_C_OnSaveClicked_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.BindSaveButton
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::BindSaveButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.BindSaveButton");
		
		UWBP_Button_Preset_C_BindSaveButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.OnOkClicked_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Preset_C::OnOkClicked_Event_1(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.OnOkClicked_Event_1");
		
		UWBP_Button_Preset_C_OnOkClicked_Event_1_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.PostUpdate_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::PostUpdate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.PostUpdate_Event_1");
		
		UWBP_Button_Preset_C_PostUpdate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetDeleted_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Preset_C::OnPresetDeleted_Event_1(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetDeleted_Event_1");
		
		UWBP_Button_Preset_C_OnPresetDeleted_Event_1_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Preset_C::Setup(class UVaRestJsonObject* JsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.Setup");
		
		UWBP_Button_Preset_C_Setup_Params params {};
		params.JsonData = JsonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.SavePreset
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::SavePreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.SavePreset");
		
		UWBP_Button_Preset_C_SavePreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.OnConfirmOkClicked_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_DialogueBox_C*                          Dialogue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Preset_C::OnConfirmOkClicked_Event_1(class UWBP_DialogueBox_C* Dialogue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.OnConfirmOkClicked_Event_1");
		
		UWBP_Button_Preset_C_OnConfirmOkClicked_Event_1_Params params {};
		params.Dialogue = Dialogue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.OnCancelClicked_Event_2
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::OnCancelClicked_Event_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.OnCancelClicked_Event_2");
		
		UWBP_Button_Preset_C_OnCancelClicked_Event_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.SavePrompt
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::SavePrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.SavePrompt");
		
		UWBP_Button_Preset_C_SavePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.HideSelectionArea
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::HideSelectionArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.HideSelectionArea");
		
		UWBP_Button_Preset_C_HideSelectionArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.ShowRestrictedAssets
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::ShowRestrictedAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.ShowRestrictedAssets");
		
		UWBP_Button_Preset_C_ShowRestrictedAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.ClearPresetList
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::ClearPresetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.ClearPresetList");
		
		UWBP_Button_Preset_C_ClearPresetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.ExecuteUbergraph_WBP_Button_Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Preset_C::ExecuteUbergraph_WBP_Button_Preset(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.ExecuteUbergraph_WBP_Button_Preset");
		
		UWBP_Button_Preset_C_ExecuteUbergraph_WBP_Button_Preset_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Preset_C::OnPresetPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetPressed__DelegateSignature");
		
		UWBP_Button_Preset_C_OnPresetPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Button_Preset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Button_Preset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Button_Preset.WBP_Button_Preset_C");
		return ptr;
	}

}


