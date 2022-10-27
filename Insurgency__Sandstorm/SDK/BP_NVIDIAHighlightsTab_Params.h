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
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.Get_HighlightsDeleteBtn_Visibility_1
	 */
	struct UBP_NVIDIAHighlightsTab_C_Get_HighlightsDeleteBtn_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.Has New Highlights
	 */
	struct UBP_NVIDIAHighlightsTab_C_Has_New_Highlights_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EM3M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.Get_HighlightsImage_bIsEnabled_1
	 */
	struct UBP_NVIDIAHighlightsTab_C_Get_HighlightsImage_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_21QN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.GetTotalText
	 */
	struct UBP_NVIDIAHighlightsTab_C_GetTotalText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.GetNewText
	 */
	struct UBP_NVIDIAHighlightsTab_C_GetNewText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.Get_HighlightsImage_ColorAndOpacity_1
	 */
	struct UBP_NVIDIAHighlightsTab_C_Get_HighlightsImage_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.BndEvt__HighlightsDeleteBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_NVIDIAHighlightsTab_C_BndEvt__HighlightsDeleteBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.BndEvt__HighlightsBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_NVIDIAHighlightsTab_C_BndEvt__HighlightsBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.BndEvt__HighlightsBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_NVIDIAHighlightsTab_C_BndEvt__HighlightsBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.BndEvt__HighlightsBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_NVIDIAHighlightsTab_C_BndEvt__HighlightsBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.ExecuteUbergraph_BP_NVIDIAHighlightsTab
	 */
	struct UBP_NVIDIAHighlightsTab_C_ExecuteUbergraph_BP_NVIDIAHighlightsTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JMUV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.OnHighlightsButtonPressed__DelegateSignature
	 */
	struct UBP_NVIDIAHighlightsTab_C_OnHighlightsButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NVIDIAHighlightsTab.BP_NVIDIAHighlightsTab_C.OnDeleteButtonPressed__DelegateSignature
	 */
	struct UBP_NVIDIAHighlightsTab_C_OnDeleteButtonPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
