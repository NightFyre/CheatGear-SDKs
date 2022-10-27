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
	 * Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.OnCustomNavigation
	 */
	struct UBP_LocalGame_MapSelection_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.PopulateMaps
	 */
	struct UBP_LocalGame_MapSelection_C_PopulateMaps_Params
	{	};

	/**
	 * Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.ChooseMap
	 */
	struct UBP_LocalGame_MapSelection_C_ChooseMap_Params
	{
	public:
		class UBP_LocalGame_MapButton_C*                           NewMapButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.CheckMapAllowed
	 */
	struct UBP_LocalGame_MapSelection_C_CheckMapAllowed_Params
	{
	public:
		class FString                                              Map;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Allowed;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T9IP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.GetWidgetToFocus
	 */
	struct UBP_LocalGame_MapSelection_C_GetWidgetToFocus_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.Construct
	 */
	struct UBP_LocalGame_MapSelection_C_Construct_Params
	{	};

	/**
	 * Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.ExecuteUbergraph_BP_LocalGame_MapSelection
	 */
	struct UBP_LocalGame_MapSelection_C_ExecuteUbergraph_BP_LocalGame_MapSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AFTA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.OnMapChosen__DelegateSignature
	 */
	struct UBP_LocalGame_MapSelection_C_OnMapChosen__DelegateSignature_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
