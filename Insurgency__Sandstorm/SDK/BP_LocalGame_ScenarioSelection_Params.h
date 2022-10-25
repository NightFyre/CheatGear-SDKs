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
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnFocusReceived
	 */
	struct UBP_LocalGame_ScenarioSelection_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.GetScenarioPrintText
	 */
	struct UBP_LocalGame_ScenarioSelection_C_GetScenarioPrintText_Params
	{
	public:
		class FText                                                GameModeNameText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ScenarioText;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ScenarioPrintText;                                       // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ChooseScenario
	 */
	struct UBP_LocalGame_ScenarioSelection_C_ChooseScenario_Params
	{
	public:
		class UBP_LocalGame_ScenarioButton_C*                      ScenarioButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.Should Display Scenario
	 */
	struct UBP_LocalGame_ScenarioSelection_C_Should_Display_Scenario_Params
	{
	public:
		class FString                                              ScenarioName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Display;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.Construct
	 */
	struct UBP_LocalGame_ScenarioSelection_C_Construct_Params
	{	};

	/**
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ScenarioChosen
	 */
	struct UBP_LocalGame_ScenarioSelection_C_ScenarioChosen_Params
	{
	public:
		class UBP_LocalGame_ScenarioButton_C*                      ScenarioButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnRefreshScenarios
	 */
	struct UBP_LocalGame_ScenarioSelection_C_OnRefreshScenarios_Params
	{	};

	/**
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ExecuteUbergraph_BP_LocalGame_ScenarioSelection
	 */
	struct UBP_LocalGame_ScenarioSelection_C_ExecuteUbergraph_BP_LocalGame_ScenarioSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J1BQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnScenarioChosen__DelegateSignature
	 */
	struct UBP_LocalGame_ScenarioSelection_C_OnScenarioChosen__DelegateSignature_Params
	{
	public:
		class FString                                              ScenarioName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              GameModeName;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                ScenarioPrintText;                                       // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
