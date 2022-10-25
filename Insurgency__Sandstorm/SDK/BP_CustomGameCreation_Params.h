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
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.CanStartCustomGame
	 */
	struct UBP_CustomGameCreation_C_CanStartCustomGame_Params
	{
	public:
		bool                                                       CanStart;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2KB5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FText>                                        Errors;                                                  // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.UpdateStartState
	 */
	struct UBP_CustomGameCreation_C_UpdateStartState_Params
	{	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.SetHighlightedListRow
	 */
	struct UBP_CustomGameCreation_C_SetHighlightedListRow_Params
	{
	public:
		class UPanelWidget*                                        Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnScenarioSelected
	 */
	struct UBP_CustomGameCreation_C_OnScenarioSelected_Params
	{
	public:
		class FString                                              Scenario;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.HasMapScenarioSelected
	 */
	struct UBP_CustomGameCreation_C_HasMapScenarioSelected_Params
	{
	public:
		bool                                                       HasMapAndScenario;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GIP2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.PopulateScenarioList
	 */
	struct UBP_CustomGameCreation_C_PopulateScenarioList_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnMapSelected
	 */
	struct UBP_CustomGameCreation_C_OnMapSelected_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.PopulateMapList
	 */
	struct UBP_CustomGameCreation_C_PopulateMapList_Params
	{	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnKeyDown
	 */
	struct UBP_CustomGameCreation_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnFocusReceived
	 */
	struct UBP_CustomGameCreation_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.Construct
	 */
	struct UBP_CustomGameCreation_C_Construct_Params
	{	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UBP_CustomGameCreation_C_BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_CustomGameCreation_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_2_OnBackButtonPressed__DelegateSignature
	 */
	struct UBP_CustomGameCreation_C_BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_2_OnBackButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.ExecuteUbergraph_BP_CustomGameCreation
	 */
	struct UBP_CustomGameCreation_C_ExecuteUbergraph_BP_CustomGameCreation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VHZO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnBack__DelegateSignature
	 */
	struct UBP_CustomGameCreation_C_OnBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnContinue__DelegateSignature
	 */
	struct UBP_CustomGameCreation_C_OnContinue__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
