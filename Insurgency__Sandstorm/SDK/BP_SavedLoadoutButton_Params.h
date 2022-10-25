#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnFocusReceived
	 */
	struct UBP_SavedLoadoutButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnKeyDown
	 */
	struct UBP_SavedLoadoutButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.CalculateDefaultSupplyCost
	 */
	struct UBP_SavedLoadoutButton_C_CalculateDefaultSupplyCost_Params
	{
	public:
		class UPlayerClass*                                        PlayerClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SupplyCost;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.UpdateSupplyCost
	 */
	struct UBP_SavedLoadoutButton_C_UpdateSupplyCost_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QF13[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.HighlightActive
	 */
	struct UBP_SavedLoadoutButton_C_HighlightActive_Params
	{	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.CalculateTotalSupplyCost
	 */
	struct UBP_SavedLoadoutButton_C_CalculateTotalSupplyCost_Params
	{
	public:
		int32_t                                                    SupplyCost;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.Get_RemoveButtonBg_BrushColor_1
	 */
	struct UBP_SavedLoadoutButton_C_Get_RemoveButtonBg_BrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_SavedLoadoutButton_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.PreConstruct
	 */
	struct UBP_SavedLoadoutButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnMouseEnter
	 */
	struct UBP_SavedLoadoutButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnMouseLeave
	 */
	struct UBP_SavedLoadoutButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnHovered
	 */
	struct UBP_SavedLoadoutButton_C_OnHovered_Params
	{	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnUnhovered
	 */
	struct UBP_SavedLoadoutButton_C_OnUnhovered_Params
	{	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnAddedToFocusPath
	 */
	struct UBP_SavedLoadoutButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_SavedLoadoutButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__RenameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_SavedLoadoutButton_C_BndEvt__RenameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_SavedLoadoutButton_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.ExecuteUbergraph_BP_SavedLoadoutButton
	 */
	struct UBP_SavedLoadoutButton_C_ExecuteUbergraph_BP_SavedLoadoutButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CGOV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnUnHover__DelegateSignature
	 */
	struct UBP_SavedLoadoutButton_C_OnUnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnHover__DelegateSignature
	 */
	struct UBP_SavedLoadoutButton_C_OnHover__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SupportRemoval;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnRenameClicked__DelegateSignature
	 */
	struct UBP_SavedLoadoutButton_C_OnRenameClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutLoadoutIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XDNL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSavedLoadout                                       Loadout;                                                 // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnLoadoutRemoved__DelegateSignature
	 */
	struct UBP_SavedLoadoutButton_C_OnLoadoutRemoved__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutLoadoutIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9HRZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSavedLoadout                                       Loadout;                                                 // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnLoadoutClicked__DelegateSignature
	 */
	struct UBP_SavedLoadoutButton_C_OnLoadoutClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutLoadoutIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
