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
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.Get_ActiveHighlightContainer_Visibility_1
	 */
	struct UBP_FindMatchButton_C_Get_ActiveHighlightContainer_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.UpdateKeyAction
	 */
	struct UBP_FindMatchButton_C_UpdateKeyAction_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                Action;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.UpdateText
	 */
	struct UBP_FindMatchButton_C_UpdateText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_FindMatchButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_FindMatchButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_FindMatchButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.PreConstruct
	 */
	struct UBP_FindMatchButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.ExecuteUbergraph_BP_FindMatchButton
	 */
	struct UBP_FindMatchButton_C_ExecuteUbergraph_BP_FindMatchButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FindMatchButton.BP_FindMatchButton_C.OnClicked__DelegateSignature
	 */
	struct UBP_FindMatchButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
