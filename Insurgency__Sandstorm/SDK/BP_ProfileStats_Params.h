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
	 * Function BP_ProfileStats.BP_ProfileStats_C.GetRatioSafe
	 */
	struct UBP_ProfileStats_C_GetRatioSafe_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Amount;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.PopulateFromPage
	 */
	struct UBP_ProfileStats_C_PopulateFromPage_Params
	{
	public:
		struct FSandstormPlayerProfilePage                         Stats;                                                   // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.GetMapSourceName
	 */
	struct UBP_ProfileStats_C_GetMapSourceName_Params
	{
	public:
		class FString                                              MapTextName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MapSourceName;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.GetMapNameFromString
	 */
	struct UBP_ProfileStats_C_GetMapNameFromString_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MapNameReturn;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.DistanceToText
	 */
	struct UBP_ProfileStats_C_DistanceToText_Params
	{
	public:
		float                                                      DistanceInCM;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJE7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DistanceText;                                            // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.TimeToText
	 */
	struct UBP_ProfileStats_C_TimeToText_Params
	{
	public:
		float                                                      TimeInSeconds;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0IWS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                TimeText;                                                // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.UpdateFilterBoxes
	 */
	struct UBP_ProfileStats_C_UpdateFilterBoxes_Params
	{
	public:
		bool                                                       bMap;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMode;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K8NB[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.OnProfileUpdated
	 */
	struct UBP_ProfileStats_C_OnProfileUpdated_Params
	{	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.UpdateFromStatsRecord
	 */
	struct UBP_ProfileStats_C_UpdateFromStatsRecord_Params
	{
	public:
		struct FStatisticsPlayerProfileScenarioStats               StatRecord;                                              // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.OnFocusReceived
	 */
	struct UBP_ProfileStats_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.Construct
	 */
	struct UBP_ProfileStats_C_Construct_Params
	{	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_ProfileStats_C_BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_ProfileStats_C_BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_ProfileStats_C_BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxTeamType_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_ProfileStats_C_BndEvt__ComboBoxTeamType_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileStats.BP_ProfileStats_C.ExecuteUbergraph_BP_ProfileStats
	 */
	struct UBP_ProfileStats_C_ExecuteUbergraph_BP_ProfileStats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F4WC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
