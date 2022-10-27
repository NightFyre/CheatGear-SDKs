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
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnKeyUp
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnFocusReceived
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.ShowNotification
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_ShowNotification_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.RefreshColors
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_RefreshColors_Params
	{	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.SetSelected
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_SetSelected_Params
	{
	public:
		bool                                                       bInSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.SetFontSize
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_SetFontSize_Params
	{	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.PreConstruct
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnAddedToFocusPath
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnMouseEnter
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnMouseLeave
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.ExecuteUbergraph_BP_OnlineStore_CategoryBaseButton
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_ExecuteUbergraph_BP_OnlineStore_CategoryBaseButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnClicked__DelegateSignature
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UBP_OnlineStore_CategoryBaseButton_C*                NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnSelected__DelegateSignature
	 */
	struct UBP_OnlineStore_CategoryBaseButton_C_OnSelected__DelegateSignature_Params
	{
	public:
		class UBP_OnlineStore_CategoryBaseButton_C*                SelectedCategory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
