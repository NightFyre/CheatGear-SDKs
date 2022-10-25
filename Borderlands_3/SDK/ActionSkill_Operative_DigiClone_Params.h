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
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneReference
	 */
	struct UActionSkill_Operative_DigiClone_C_GetDigiCloneReference_Params
	{
	public:
		class AActor*                                              Digiclone;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Is DigiClone Active
	 */
	struct UActionSkill_Operative_DigiClone_C_Is_DigiClone_Active_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetQueryParamsForCloneSwapLocationAttempt
	 */
	struct UActionSkill_Operative_DigiClone_C_GetQueryParamsForCloneSwapLocationAttempt_Params
	{
	public:
		int32_t                                                    Attempt;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QXJG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEnvQueryParams                                     Params;                                                  // 0x0008(0x00B8)  (Parm, OutParm, ContainsInstancedReference)
		class AActor*                                              QueryContext;                                            // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldStopAbilityOnPawnSlotComponentAttach
	 */
	struct UActionSkill_Operative_DigiClone_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PlayDigiCloneSpawnFX
	 */
	struct UActionSkill_Operative_DigiClone_C_PlayDigiCloneSpawnFX_Params
	{
	public:
		class ABPChar_DigiClone_Base_C*                            NewClone;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PayDigiCloneSpawnCost
	 */
	struct UActionSkill_Operative_DigiClone_C_PayDigiCloneSpawnCost_Params
	{
	public:
		int32_t                                                    GrenadeSpawnCost;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneGrenadeSpawnCost
	 */
	struct UActionSkill_Operative_DigiClone_C_GetDigiCloneGrenadeSpawnCost_Params
	{
	public:
		int32_t                                                    res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YMQH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigicloneClass
	 */
	struct UActionSkill_Operative_DigiClone_C_GetDigicloneClass_Params
	{
	public:
		int32_t                                                    GrenadeSpawnCost;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_70YB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              res;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.DoBurst
	 */
	struct UActionSkill_Operative_DigiClone_C_DoBurst_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.TryJustAcceptRefund
	 */
	struct UActionSkill_Operative_DigiClone_C_TryJustAcceptRefund_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitDirection;                                            // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A8Z2[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SpawnNewDigiclone
	 */
	struct UActionSkill_Operative_DigiClone_C_SpawnNewDigiclone_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FHPE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AOakCharacter*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartDistractionPrinciple
	 */
	struct UActionSkill_Operative_DigiClone_C_StartDistractionPrinciple_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldAbortActivation
	 */
	struct UActionSkill_Operative_DigiClone_C_ShouldAbortActivation_Params
	{
	public:
		unsigned char                                              OutAbortCode;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetCooldownRestartPercent
	 */
	struct UActionSkill_Operative_DigiClone_C_GetCooldownRestartPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Add Swap Places Modifier
	 */
	struct UActionSkill_Operative_DigiClone_C_Add_Swap_Places_Modifier_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Corsican
	 */
	struct UActionSkill_Operative_DigiClone_C_Corsican_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VWRV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               DamageSource;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnStartActionAbility
	 */
	struct UActionSkill_Operative_DigiClone_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SwapPlaces
	 */
	struct UActionSkill_Operative_DigiClone_C_SwapPlaces_Params
	{
	public:
		ECloneSwapReason                                           Reason;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ReleaseDigiclone
	 */
	struct UActionSkill_Operative_DigiClone_C_ReleaseDigiclone_Params
	{
	public:
		class AOakCharacter*                                       Digiclone;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCorsicanDamage
	 */
	struct UActionSkill_Operative_DigiClone_C_OnCorsicanDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GPLT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               DamageSource;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.BeginDetonateClone
	 */
	struct UActionSkill_Operative_DigiClone_C_BeginDetonateClone_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.CancelDetonateClone
	 */
	struct UActionSkill_Operative_DigiClone_C_CancelDetonateClone_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.NotifyPanicButtonTriggered
	 */
	struct UActionSkill_Operative_DigiClone_C_NotifyPanicButtonTriggered_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Just Accept It Timer Done
	 */
	struct UActionSkill_Operative_DigiClone_C_Just_Accept_It_Timer_Done_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapStarted
	 */
	struct UActionSkill_Operative_DigiClone_C_OnCloneSwapStarted_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapStarted
	 */
	struct UActionSkill_Operative_DigiClone_C_OnPlayerSwapStarted_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapSucceeded
	 */
	struct UActionSkill_Operative_DigiClone_C_OnPlayerSwapSucceeded_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartSeperationAnxietyNova
	 */
	struct UActionSkill_Operative_DigiClone_C_StartSeperationAnxietyNova_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapSucceeded
	 */
	struct UActionSkill_Operative_DigiClone_C_OnCloneSwapSucceeded_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapFailed
	 */
	struct UActionSkill_Operative_DigiClone_C_OnPlayerSwapFailed_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapFailed
	 */
	struct UActionSkill_Operative_DigiClone_C_OnCloneSwapFailed_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ExecuteUbergraph_ActionSkill_Operative_DigiClone
	 */
	struct UActionSkill_Operative_DigiClone_C_ExecuteUbergraph_ActionSkill_Operative_DigiClone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2EXC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
