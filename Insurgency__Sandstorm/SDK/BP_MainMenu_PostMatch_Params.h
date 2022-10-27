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
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.GetAppearanceCreditVisibility
	 */
	struct UBP_MainMenu_PostMatch_C_GetAppearanceCreditVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.GetLastKnownAppearanceCreditBalance
	 */
	struct UBP_MainMenu_PostMatch_C_GetLastKnownAppearanceCreditBalance_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_BtnNextMatch_bIsEnabled_1
	 */
	struct UBP_MainMenu_PostMatch_C_Get_BtnNextMatch_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_55VW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_SectionText_Text_1
	 */
	struct UBP_MainMenu_PostMatch_C_Get_SectionText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_TextNextQueueIn_Visibility_1
	 */
	struct UBP_MainMenu_PostMatch_C_Get_TextNextQueueIn_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_TextNextQueueIn_Text_1
	 */
	struct UBP_MainMenu_PostMatch_C_Get_TextNextQueueIn_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnKeyDown
	 */
	struct UBP_MainMenu_PostMatch_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnFocusReceived
	 */
	struct UBP_MainMenu_PostMatch_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_PlayerName_Text_1
	 */
	struct UBP_MainMenu_PostMatch_C_Get_PlayerName_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnPageSelected
	 */
	struct UBP_MainMenu_PostMatch_C_OnPageSelected_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JKJ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_211_OnTabSelected__DelegateSignature
	 */
	struct UBP_MainMenu_PostMatch_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_211_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_PostMatch_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__ButtonNextMatch_K2Node_ComponentBoundEvent_199_OnClick__DelegateSignature
	 */
	struct UBP_MainMenu_PostMatch_C_BndEvt__ButtonNextMatch_K2Node_ComponentBoundEvent_199_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_238_OnClick__DelegateSignature
	 */
	struct UBP_MainMenu_PostMatch_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_238_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnPanelClosed
	 */
	struct UBP_MainMenu_PostMatch_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.ExecuteUbergraph_BP_MainMenu_PostMatch
	 */
	struct UBP_MainMenu_PostMatch_C_ExecuteUbergraph_BP_MainMenu_PostMatch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XV1L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_PostMatch_C_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnOpenServerBrowser__DelegateSignature
	 */
	struct UBP_MainMenu_PostMatch_C_OnOpenServerBrowser__DelegateSignature_Params
	{
	public:
		class FName                                                Type;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
