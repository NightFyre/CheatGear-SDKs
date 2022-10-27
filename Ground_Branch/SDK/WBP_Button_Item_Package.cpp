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
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.Icon Hover Color
	 * 		Flags  -> ()
	 */
	struct FLinearColor UWBP_Button_Item_C::Icon_Hover_Color()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.Icon Hover Color");
		
		UWBP_Button_Item_C_Icon_Hover_Color_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.IsValidItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetId                             ItemAssetId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOutIsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Item_C::IsValidItem(const struct FPrimaryAssetId& ItemAssetId, bool* bOutIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.IsValidItem");
		
		UWBP_Button_Item_C_IsValidItem_Params params {};
		params.ItemAssetId = ItemAssetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsValid != nullptr)
			*bOutIsValid = params.bOutIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.ChooseSimilarSkin
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::ChooseSimilarSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.ChooseSimilarSkin");
		
		UWBP_Button_Item_C_ChooseSimilarSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.ValidateSkin
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::ValidateSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.ValidateSkin");
		
		UWBP_Button_Item_C_ValidateSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.GetEditVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_Button_Item_C::GetEditVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.GetEditVis");
		
		UWBP_Button_Item_C_GetEditVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.GetEditItemJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           OutKitJsonObj                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::GetEditItemJson(class UVaRestJsonObject** OutKitJsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.GetEditItemJson");
		
		UWBP_Button_Item_C_GetEditItemJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKitJsonObj != nullptr)
			*OutKitJsonObj = params.OutKitJsonObj;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.GetPresetJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           OutDataEntry                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::GetPresetJson(class UVaRestJsonObject** OutDataEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.GetPresetJson");
		
		UWBP_Button_Item_C_GetPresetJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDataEntry != nullptr)
			*OutDataEntry = params.OutDataEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.HasBeenChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Item_C::HasBeenChanged(bool* bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.HasBeenChanged");
		
		UWBP_Button_Item_C_HasBeenChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValue != nullptr)
			*bValue = params.bValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.PreConstruct");
		
		UWBP_Button_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_ItemList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BndEvt__Button_ItemList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_ItemList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Button_Item_C_BndEvt__Button_ItemList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadIconComplete_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::OnAsyncLoadIconComplete_Event(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadIconComplete_Event");
		
		UWBP_Button_Item_C_OnAsyncLoadIconComplete_Event_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadSkinDataAsset_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::OnAsyncLoadSkinDataAsset_Event(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadSkinDataAsset_Event");
		
		UWBP_Button_Item_C_OnAsyncLoadSkinDataAsset_Event_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.Construct");
		
		UWBP_Button_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Button_Item_C_BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           KitJsonObj                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromPreset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Item_C::Update(class UVaRestJsonObject* KitJsonObj, bool bFromPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.Update");
		
		UWBP_Button_Item_C_Update_Params params {};
		params.KitJsonObj = KitJsonObj;
		params.bFromPreset = bFromPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.UpdateIcon");
		
		UWBP_Button_Item_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadIcon_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::OnAsyncLoadIcon_Event(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadIcon_Event");
		
		UWBP_Button_Item_C_OnAsyncLoadIcon_Event_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.UpdateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::UpdateItem(class UVaRestJsonObject* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.UpdateItem");
		
		UWBP_Button_Item_C_UpdateItem_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.AddSubtypes
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::AddSubtypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.AddSubtypes");
		
		UWBP_Button_Item_C_AddSubtypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.AddSubTypeTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::AddSubTypeTab(const class FName& SubType, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.AddSubTypeTab");
		
		UWBP_Button_Item_C_AddSubTypeTab_Params params {};
		params.SubType = SubType;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.PopulateItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetType                           ItemAssetType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::PopulateItemList(const struct FPrimaryAssetType& ItemAssetType, const class FName& SubType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.PopulateItemList");
		
		UWBP_Button_Item_C_PopulateItemList_Params params {};
		params.ItemAssetType = ItemAssetType;
		params.SubType = SubType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.CreateItemBuildEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::CreateItemBuildEntry(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.CreateItemBuildEntry");
		
		UWBP_Button_Item_C_CreateItemBuildEntry_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.AddItemAssetEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetId                             ItemAssetId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::AddItemAssetEntry(const struct FPrimaryAssetId& ItemAssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.AddItemAssetEntry");
		
		UWBP_Button_Item_C_AddItemAssetEntry_Params params {};
		params.ItemAssetId = ItemAssetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnSelectedItemAsset_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetId                             ItemAssetId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::OnSelectedItemAsset_Event_1(const struct FPrimaryAssetId& ItemAssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnSelectedItemAsset_Event_1");
		
		UWBP_Button_Item_C_OnSelectedItemAsset_Event_1_Params params {};
		params.ItemAssetId = ItemAssetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnSelectItemBuild_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonObj                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::OnSelectItemBuild_Event_1(class UVaRestJsonObject* JsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnSelectItemBuild_Event_1");
		
		UWBP_Button_Item_C_OnSelectItemBuild_Event_1_Params params {};
		params.JsonObj = JsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemBuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemBuildData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::UpdateItemBuild(class UVaRestJsonObject* ItemBuildData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemBuild");
		
		UWBP_Button_Item_C_UpdateItemBuild_Params params {};
		params.ItemBuildData = ItemBuildData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnClicked_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::OnClicked_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnClicked_Event_1");
		
		UWBP_Button_Item_C_OnClicked_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BindButtonClearRightSelection
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BindButtonClearRightSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BindButtonClearRightSelection");
		
		UWBP_Button_Item_C_BindButtonClearRightSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnSelectSkin_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SkinName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::OnSelectSkin_Event_1(const class FName& SkinName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnSelectSkin_Event_1");
		
		UWBP_Button_Item_C_OnSelectSkin_Event_1_Params params {};
		params.SkinName = SkinName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.UpdateSkin
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::UpdateSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.UpdateSkin");
		
		UWBP_Button_Item_C_UpdateSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BindButtonClearLeftSelection
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BindButtonClearLeftSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BindButtonClearLeftSelection");
		
		UWBP_Button_Item_C_BindButtonClearLeftSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnClicked_Event_2
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::OnClicked_Event_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnClicked_Event_2");
		
		UWBP_Button_Item_C_OnClicked_Event_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.ClearItem
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::ClearItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.ClearItem");
		
		UWBP_Button_Item_C_ClearItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.UpdatePresetsCheck
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::UpdatePresetsCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.UpdatePresetsCheck");
		
		UWBP_Button_Item_C_UpdatePresetsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.UpdatePresets
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::UpdatePresets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.UpdatePresets");
		
		UWBP_Button_Item_C_UpdatePresets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.ClearPresets
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::ClearPresets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.ClearPresets");
		
		UWBP_Button_Item_C_ClearPresets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Button_Item_C_BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnCancel_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::OnCancel_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnCancel_Event_1");
		
		UWBP_Button_Item_C_OnCancel_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.OnOk_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           KitJsonObj                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::OnOk_Event_1(class UVaRestJsonObject* KitJsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.OnOk_Event_1");
		
		UWBP_Button_Item_C_OnOk_Event_1_Params params {};
		params.KitJsonObj = KitJsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.SetDefaultIfMissing
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::SetDefaultIfMissing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.SetDefaultIfMissing");
		
		UWBP_Button_Item_C_SetDefaultIfMissing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Button_Item_C_BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Button_Item_C_BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Button_Item_C_BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Button_Item_C_BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             LoadedAssets                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Button_Item_C::UpdateItemInternal(TArray<class UObject*> LoadedAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemInternal");
		
		UWBP_Button_Item_C_UpdateItemInternal_Params params {};
		params.LoadedAssets = LoadedAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemBuildInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             LoadedAssets                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Button_Item_C::UpdateItemBuildInternal(TArray<class UObject*> LoadedAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemBuildInternal");
		
		UWBP_Button_Item_C_UpdateItemBuildInternal_Params params {};
		params.LoadedAssets = LoadedAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.SetSubtypeIconHighlight
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::SetSubtypeIconHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.SetSubtypeIconHighlight");
		
		UWBP_Button_Item_C_SetSubtypeIconHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.ExecuteUbergraph_WBP_Button_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Item_C::ExecuteUbergraph_WBP_Button_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.ExecuteUbergraph_WBP_Button_Item");
		
		UWBP_Button_Item_C_ExecuteUbergraph_WBP_Button_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.PostUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::PostUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.PostUpdate__DelegateSignature");
		
		UWBP_Button_Item_C_PostUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.PostClear__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::PostClear__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.PostClear__DelegateSignature");
		
		UWBP_Button_Item_C_PostClear__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Item.WBP_Button_Item_C.PreUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Item_C::PreUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button_Item.WBP_Button_Item_C.PreUpdate__DelegateSignature");
		
		UWBP_Button_Item_C_PreUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Button_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Button_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Button_Item.WBP_Button_Item_C");
		return ptr;
	}

}


