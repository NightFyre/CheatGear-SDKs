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
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Tick
	 */
	struct UBP_ObjectiveIcon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Invalidate And Update Everything
	 */
	struct UBP_ObjectiveIcon_C_Invalidate_And_Update_Everything_Params
	{	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnSetObjective
	 */
	struct UBP_ObjectiveIcon_C_OnSetObjective_Params
	{
	public:
		class AObjectiveBase*                                      NewObjective;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveActive
	 */
	struct UBP_ObjectiveIcon_C_OnObjectiveActive_Params
	{
	public:
		bool                                                       bNewActiveState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VT61[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AObjectiveBase*                                      InObjective;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveChangeCapturingTeam
	 */
	struct UBP_ObjectiveIcon_C_OnObjectiveChangeCapturingTeam_Params
	{
	public:
		class AObjectiveBase*                                      InObjective;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCapturers;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveChangeOwner
	 */
	struct UBP_ObjectiveIcon_C_OnObjectiveChangeOwner_Params
	{
	public:
		class AObjectiveBase*                                      InObjective;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewOwners;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnPlayerChangeTeam
	 */
	struct UBP_ObjectiveIcon_C_OnPlayerChangeTeam_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6RTC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATeamInfo*                                           TeamInfo;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Ensure Objective Is Visibile
	 */
	struct UBP_ObjectiveIcon_C_Ensure_Objective_Is_Visibile_Params
	{	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveIsCounterAttacked
	 */
	struct UBP_ObjectiveIcon_C_OnObjectiveIsCounterAttacked_Params
	{
	public:
		bool                                                       bNewCounterAttackState;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J2G9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AObjectiveBase*                                      InObjective;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.ExecuteUbergraph_BP_ObjectiveIcon
	 */
	struct UBP_ObjectiveIcon_C_ExecuteUbergraph_BP_ObjectiveIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
