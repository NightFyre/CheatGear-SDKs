#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function DefaultBrain.DefaultBrain_C.ShowDebugGoal
	 */
	struct UDefaultBrain_C_ShowDebugGoal_Params
	{	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.isNearDenseCover
	 */
	struct UDefaultBrain_C_isNearDenseCover_Params
	{
	public:
		int32_t                                                    NearXNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Bounds_X;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Bounds_Y;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Bounds_Z;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CoverIsDense;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RBIN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.PickARandomGoalString
	 */
	struct UDefaultBrain_C_PickARandomGoalString_Params
	{
	public:
		TArray<class FString>                                      Choices;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Chosen;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.ExtraChecks
	 */
	struct UDefaultBrain_C_ExtraChecks_Params
	{	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.RunThinkCooldown
	 */
	struct UDefaultBrain_C_RunThinkCooldown_Params
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.ThinkCooldown
	 */
	struct UDefaultBrain_C_ThinkCooldown_Params
	{	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.Brain_StartGoalChoice
	 */
	struct UDefaultBrain_C_Brain_StartGoalChoice_Params
	{
	public:
		ERaidAIState                                               StateCompleted;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.RunGTFOCooldown
	 */
	struct UDefaultBrain_C_RunGTFOCooldown_Params
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.GTFOcooldownReset
	 */
	struct UDefaultBrain_C_GTFOcooldownReset_Params
	{	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.Delayover
	 */
	struct UDefaultBrain_C_Delayover_Params
	{	};

	/**
	 * Function DefaultBrain.DefaultBrain_C.ExecuteUbergraph_DefaultBrain
	 */
	struct UDefaultBrain_C_ExecuteUbergraph_DefaultBrain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
