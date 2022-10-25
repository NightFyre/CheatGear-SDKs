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
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.OnKeyDown
	 */
	struct UBP_LanguageSelect_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.GetVisibility_1
	 */
	struct UBP_LanguageSelect_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.OnKeyUp
	 */
	struct UBP_LanguageSelect_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.PromptLanguage
	 */
	struct UBP_LanguageSelect_C_PromptLanguage_Params
	{	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.OnFocusReceived
	 */
	struct UBP_LanguageSelect_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.ApplyChanges
	 */
	struct UBP_LanguageSelect_C_ApplyChanges_Params
	{	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.SetSelectedButton
	 */
	struct UBP_LanguageSelect_C_SetSelectedButton_Params
	{
	public:
		class FString                                              LanguageTag;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.OnLanguageSelected
	 */
	struct UBP_LanguageSelect_C_OnLanguageSelected_Params
	{
	public:
		class FString                                              LanguageTag;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                LanguageName;                                            // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.BuildLanguageButtons
	 */
	struct UBP_LanguageSelect_C_BuildLanguageButtons_Params
	{	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.PreConstruct
	 */
	struct UBP_LanguageSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.Construct
	 */
	struct UBP_LanguageSelect_C_Construct_Params
	{	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_LanguageSelect_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature
	 */
	struct UBP_LanguageSelect_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_2_OnCanceled__DelegateSignature
	 */
	struct UBP_LanguageSelect_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_2_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 */
	struct UBP_LanguageSelect_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.ExecuteUbergraph_BP_LanguageSelect
	 */
	struct UBP_LanguageSelect_C_ExecuteUbergraph_BP_LanguageSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LanguageSelect.BP_LanguageSelect_C.LanguageApplied__DelegateSignature
	 */
	struct UBP_LanguageSelect_C_LanguageApplied__DelegateSignature_Params
	{
	public:
		bool                                                       IsNewCulture;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
