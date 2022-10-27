#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetBrushWithImageTexture
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetBrushWithImageTexture_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTexture2D*                                          Image;                                                   // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         UpdatedBrush;                                            // 0x0090(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalRefreshDimensions
	 */
	struct UWBP_CreateGameSelectionListEntry_C_InternalRefreshDimensions_Params
	{	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemMinHeight
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetItemMinHeight_Params
	{
	public:
		int32_t                                                    MinHeight;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemMinWidth
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetItemMinWidth_Params
	{
	public:
		int32_t                                                    MinWidth;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemMinDimensions
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemMinDimensions_Params
	{
	public:
		int32_t                                                    InMinWidth;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMinHeight;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSubText
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetItemSubText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemText
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetItemText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSubText
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemSubText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemText
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSubTextStyle
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetItemSubTextStyle_Params
	{
	public:
		struct FFSelectionItemTextStyle                            TextStyle;                                               // 0x0000(0x0130)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemTextStyle
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetItemTextStyle_Params
	{
	public:
		struct FFSelectionItemTextStyle                            TextStyle;                                               // 0x0000(0x0130)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemStyle
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetItemStyle_Params
	{
	public:
		struct FCheckBoxStyle                                      ItemStyle;                                               // 0x0000(0x0580)  (Parm, OutParm)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemImage
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemImage_Params
	{
	public:
		class UTexture2D*                                          InItemImg;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSubTextStyle
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemSubTextStyle_Params
	{
	public:
		struct FFSelectionItemTextStyle                            InItemSubTextStyle;                                      // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemTextStyle
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemTextStyle_Params
	{
	public:
		struct FFSelectionItemTextStyle                            InItemTextStyle;                                         // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemStyle
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemStyle_Params
	{
	public:
		struct FCheckBoxStyle                                      InItemStyle;                                             // 0x0000(0x0580)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalUpdateItemBgTintColor
	 */
	struct UWBP_CreateGameSelectionListEntry_C_InternalUpdateItemBgTintColor_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalApplyStyleToText
	 */
	struct UWBP_CreateGameSelectionListEntry_C_InternalApplyStyleToText_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFSelectionItemTextStyle                            TextStyle;                                               // 0x0008(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.IsItemSelected
	 */
	struct UWBP_CreateGameSelectionListEntry_C_IsItemSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSelectionState
	 */
	struct UWBP_CreateGameSelectionListEntry_C_GetItemSelectionState_Params
	{
	public:
		ECheckBoxState                                             SelectionState;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemIsSelected
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemIsSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSelectionState
	 */
	struct UWBP_CreateGameSelectionListEntry_C_SetItemSelectionState_Params
	{
	public:
		ECheckBoxState                                             InSelectionState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.PreConstruct
	 */
	struct UWBP_CreateGameSelectionListEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_CreateGameSelectionListEntry_C_BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.ExecuteUbergraph_WBP_CreateGameSelectionListEntry
	 */
	struct UWBP_CreateGameSelectionListEntry_C_ExecuteUbergraph_WBP_CreateGameSelectionListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.OnSelectionStateChanged__DelegateSignature
	 */
	struct UWBP_CreateGameSelectionListEntry_C_OnSelectionStateChanged__DelegateSignature_Params
	{
	public:
		class UWBP_CreateGameSelectionListEntry_C*                 Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
