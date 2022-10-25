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
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.Get_Button_Edit_Visibility_1
	 */
	struct UWBP_ListEntry_ItemAsset_C_Get_Button_Edit_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ListEntry_ItemAsset_C_BndEvt__Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.Construct
	 */
	struct UWBP_ListEntry_ItemAsset_C_Construct_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.OnAsyncLoadIconComplete_Event
	 */
	struct UWBP_ListEntry_ItemAsset_C_OnAsyncLoadIconComplete_Event_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.SetCurrentlySelected
	 */
	struct UWBP_ListEntry_ItemAsset_C_SetCurrentlySelected_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ListEntry_ItemAsset_C_BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.OnOk_Event_1
	 */
	struct UWBP_ListEntry_ItemAsset_C_OnOk_Event_1_Params
	{
	public:
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.OnCancel_Event_1
	 */
	struct UWBP_ListEntry_ItemAsset_C_OnCancel_Event_1_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.BndEvt__WBP_ListEntry_ItemAsset_Button_WholeItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ListEntry_ItemAsset_C_BndEvt__WBP_ListEntry_ItemAsset_Button_WholeItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.BndEvt__WBP_ListEntry_ItemAsset_Button_WholeItem_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ListEntry_ItemAsset_C_BndEvt__WBP_ListEntry_ItemAsset_Button_WholeItem_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.BndEvt__WBP_ListEntry_ItemAsset_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ListEntry_ItemAsset_C_BndEvt__WBP_ListEntry_ItemAsset_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.BndEvt__WBP_ListEntry_ItemAsset_Button_Edit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ListEntry_ItemAsset_C_BndEvt__WBP_ListEntry_ItemAsset_Button_Edit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.ExecuteUbergraph_WBP_ListEntry_ItemAsset
	 */
	struct UWBP_ListEntry_ItemAsset_C_ExecuteUbergraph_WBP_ListEntry_ItemAsset_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KJSG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C.OnSelectedItemAsset__DelegateSignature
	 */
	struct UWBP_ListEntry_ItemAsset_C_OnSelectedItemAsset__DelegateSignature_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
