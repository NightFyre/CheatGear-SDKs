#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnRep_DominateTarget
	 */
	struct UPassive_Beastmaster_Bond10_C_OnRep_DominateTarget_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DetermineTargetClassification
	 */
	struct UPassive_Beastmaster_Bond10_C_DetermineTargetClassification_Params
	{
	public:
		int32_t                                                    FinalDurationScalar;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.RemoveDominateTargetFromList
	 */
	struct UPassive_Beastmaster_Bond10_C_RemoveDominateTargetFromList_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.TryApplyDominate
	 */
	struct UPassive_Beastmaster_Bond10_C_TryApplyDominate_Params
	{
	public:
		class UDamageSource*                                       DamageSource;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VJ45[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorToDominate;                                         // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.AddDominateTargetToList
	 */
	struct UPassive_Beastmaster_Bond10_C_AddDominateTargetToList_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.HandleDominateTimerFinished
	 */
	struct UPassive_Beastmaster_Bond10_C_HandleDominateTimerFinished_Params
	{
	public:
		class UObject*                                             InSpecTimer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakAbilityTimerResult                                     InResult;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6PT0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DoHealthPercentDamage
	 */
	struct UPassive_Beastmaster_Bond10_C_DoHealthPercentDamage_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnAbilityTimerStarted
	 */
	struct UPassive_Beastmaster_Bond10_C_OnAbilityTimerStarted_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnAbilityTimerEnded
	 */
	struct UPassive_Beastmaster_Bond10_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnDeath_DominateTarget_HitRun9
	 */
	struct UPassive_Beastmaster_Bond10_C_OnDeath_DominateTarget_HitRun9_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.EndDomination
	 */
	struct UPassive_Beastmaster_Bond10_C_EndDomination_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnCausedDamage_HitAndRun9
	 */
	struct UPassive_Beastmaster_Bond10_C_OnCausedDamage_HitAndRun9_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NGH7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DoDominateExplosion
	 */
	struct UPassive_Beastmaster_Bond10_C_DoDominateExplosion_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnActivated
	 */
	struct UPassive_Beastmaster_Bond10_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.ExecuteUbergraph_Passive_Beastmaster_Bond10
	 */
	struct UPassive_Beastmaster_Bond10_C_ExecuteUbergraph_Passive_Beastmaster_Bond10_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
