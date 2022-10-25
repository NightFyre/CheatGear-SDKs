#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.Icon Hover Color
	 */
	struct UWBP_Button_Item_C_Icon_Hover_Color_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.IsValidItem
	 */
	struct UWBP_Button_Item_C_IsValidItem_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOutIsValid;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.ChooseSimilarSkin
	 */
	struct UWBP_Button_Item_C_ChooseSimilarSkin_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.ValidateSkin
	 */
	struct UWBP_Button_Item_C_ValidateSkin_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.GetEditVis
	 */
	struct UWBP_Button_Item_C_GetEditVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.GetEditItemJson
	 */
	struct UWBP_Button_Item_C_GetEditItemJson_Params
	{
	public:
		class UVaRestJsonObject*                                   OutKitJsonObj;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.GetPresetJson
	 */
	struct UWBP_Button_Item_C_GetPresetJson_Params
	{
	public:
		class UVaRestJsonObject*                                   OutDataEntry;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.HasBeenChanged
	 */
	struct UWBP_Button_Item_C_HasBeenChanged_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.PreConstruct
	 */
	struct UWBP_Button_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_ItemList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Button_Item_C_BndEvt__Button_ItemList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadIconComplete_Event
	 */
	struct UWBP_Button_Item_C_OnAsyncLoadIconComplete_Event_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadSkinDataAsset_Event
	 */
	struct UWBP_Button_Item_C_OnAsyncLoadSkinDataAsset_Event_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.Construct
	 */
	struct UWBP_Button_Item_C_Construct_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Button_Item_C_BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.Update
	 */
	struct UWBP_Button_Item_C_Update_Params
	{
	public:
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromPreset;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.UpdateIcon
	 */
	struct UWBP_Button_Item_C_UpdateIcon_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnAsyncLoadIcon_Event
	 */
	struct UWBP_Button_Item_C_OnAsyncLoadIcon_Event_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.UpdateItem
	 */
	struct UWBP_Button_Item_C_UpdateItem_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.AddSubtypes
	 */
	struct UWBP_Button_Item_C_AddSubtypes_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.AddSubTypeTab
	 */
	struct UWBP_Button_Item_C_AddSubTypeTab_Params
	{
	public:
		class FName                                                SubType;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.PopulateItemList
	 */
	struct UWBP_Button_Item_C_PopulateItemList_Params
	{
	public:
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                                SubType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.CreateItemBuildEntry
	 */
	struct UWBP_Button_Item_C_CreateItemBuildEntry_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.AddItemAssetEntry
	 */
	struct UWBP_Button_Item_C_AddItemAssetEntry_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnSelectedItemAsset_Event_1
	 */
	struct UWBP_Button_Item_C_OnSelectedItemAsset_Event_1_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnSelectItemBuild_Event_1
	 */
	struct UWBP_Button_Item_C_OnSelectItemBuild_Event_1_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonObj;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemBuild
	 */
	struct UWBP_Button_Item_C_UpdateItemBuild_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemBuildData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnClicked_Event_1
	 */
	struct UWBP_Button_Item_C_OnClicked_Event_1_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BindButtonClearRightSelection
	 */
	struct UWBP_Button_Item_C_BindButtonClearRightSelection_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnSelectSkin_Event_1
	 */
	struct UWBP_Button_Item_C_OnSelectSkin_Event_1_Params
	{
	public:
		class FName                                                SkinName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.UpdateSkin
	 */
	struct UWBP_Button_Item_C_UpdateSkin_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BindButtonClearLeftSelection
	 */
	struct UWBP_Button_Item_C_BindButtonClearLeftSelection_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnClicked_Event_2
	 */
	struct UWBP_Button_Item_C_OnClicked_Event_2_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.ClearItem
	 */
	struct UWBP_Button_Item_C_ClearItem_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.UpdatePresetsCheck
	 */
	struct UWBP_Button_Item_C_UpdatePresetsCheck_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.UpdatePresets
	 */
	struct UWBP_Button_Item_C_UpdatePresets_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.ClearPresets
	 */
	struct UWBP_Button_Item_C_ClearPresets_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Button_Item_C_BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnCancel_Event_1
	 */
	struct UWBP_Button_Item_C_OnCancel_Event_1_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.OnOk_Event_1
	 */
	struct UWBP_Button_Item_C_OnOk_Event_1_Params
	{
	public:
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.SetDefaultIfMissing
	 */
	struct UWBP_Button_Item_C_SetDefaultIfMissing_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Button_Item_C_BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Button_Item_C_BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Button_Item_C_BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Button_Item_C_BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemInternal
	 */
	struct UWBP_Button_Item_C_UpdateItemInternal_Params
	{
	public:
		TArray<class UObject*>                                     LoadedAssets;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.UpdateItemBuildInternal
	 */
	struct UWBP_Button_Item_C_UpdateItemBuildInternal_Params
	{
	public:
		TArray<class UObject*>                                     LoadedAssets;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.SetSubtypeIconHighlight
	 */
	struct UWBP_Button_Item_C_SetSubtypeIconHighlight_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.ExecuteUbergraph_WBP_Button_Item
	 */
	struct UWBP_Button_Item_C_ExecuteUbergraph_WBP_Button_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BY5E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.PostUpdate__DelegateSignature
	 */
	struct UWBP_Button_Item_C_PostUpdate__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.PostClear__DelegateSignature
	 */
	struct UWBP_Button_Item_C_PostClear__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Item.WBP_Button_Item_C.PreUpdate__DelegateSignature
	 */
	struct UWBP_Button_Item_C_PreUpdate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
