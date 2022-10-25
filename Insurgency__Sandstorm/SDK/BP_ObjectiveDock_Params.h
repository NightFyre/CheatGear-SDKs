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
	 * Function BP_ObjectiveDock.BP_ObjectiveDock_C.RefreshObjectives
	 */
	struct UBP_ObjectiveDock_C_RefreshObjectives_Params
	{	};

	/**
	 * Function BP_ObjectiveDock.BP_ObjectiveDock_C.PopulateObjectiveWidgets
	 */
	struct UBP_ObjectiveDock_C_PopulateObjectiveWidgets_Params
	{	};

	/**
	 * Function BP_ObjectiveDock.BP_ObjectiveDock_C.HaveObjectivesChanged
	 */
	struct UBP_ObjectiveDock_C_HaveObjectivesChanged_Params
	{
	public:
		bool                                                       bChanged;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D2OL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ObjectiveDock.BP_ObjectiveDock_C.Construct
	 */
	struct UBP_ObjectiveDock_C_Construct_Params
	{	};

	/**
	 * Function BP_ObjectiveDock.BP_ObjectiveDock_C.Tick
	 */
	struct UBP_ObjectiveDock_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveDock.BP_ObjectiveDock_C.ExecuteUbergraph_BP_ObjectiveDock
	 */
	struct UBP_ObjectiveDock_C_ExecuteUbergraph_BP_ObjectiveDock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
