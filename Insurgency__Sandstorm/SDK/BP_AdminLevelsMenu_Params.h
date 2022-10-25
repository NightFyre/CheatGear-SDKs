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
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.ClearLevelList
	 */
	struct UBP_AdminLevelsMenu_C_ClearLevelList_Params
	{	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnScenarioButtonClicked
	 */
	struct UBP_AdminLevelsMenu_C_OnScenarioButtonClicked_Params
	{
	public:
		class FString                                              Scenario;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    IntValue;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RJS1[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnLevelButtonClicked
	 */
	struct UBP_AdminLevelsMenu_C_OnLevelButtonClicked_Params
	{
	public:
		class FString                                              Level;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    IntValue;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnSelectLevel
	 */
	struct UBP_AdminLevelsMenu_C_OnSelectLevel_Params
	{
	public:
		class FString                                              Level;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.PopulateScenarioList
	 */
	struct UBP_AdminLevelsMenu_C_PopulateScenarioList_Params
	{
	public:
		TArray<class FString>                                      Scenarios;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.PopulateLevelList
	 */
	struct UBP_AdminLevelsMenu_C_PopulateLevelList_Params
	{
	public:
		TArray<class FString>                                      Levels;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.Construct
	 */
	struct UBP_AdminLevelsMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnReceivedLevelList
	 */
	struct UBP_AdminLevelsMenu_C_OnReceivedLevelList_Params
	{
	public:
		TArray<class FString>                                      LevelNames;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnReceivedScenarioList
	 */
	struct UBP_AdminLevelsMenu_C_OnReceivedScenarioList_Params
	{
	public:
		TArray<class FString>                                      Scenarios;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.BndEvt__DayButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UBP_AdminLevelsMenu_C_BndEvt__DayButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.BndEvt__NightButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct UBP_AdminLevelsMenu_C_BndEvt__NightButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.ExecuteUbergraph_BP_AdminLevelsMenu
	 */
	struct UBP_AdminLevelsMenu_C_ExecuteUbergraph_BP_AdminLevelsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
