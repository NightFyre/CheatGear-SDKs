#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetPlayerEffectVisibility
	 */
	struct UWBP_PlayerStatus_C_SetPlayerEffectVisibility_Params
	{
	public:
		class UWidget*                                             EffectWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetMedicHealingEffectVisibility
	 */
	struct UWBP_PlayerStatus_C_SetMedicHealingEffectVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetAmmoResupplyEffectVisibility
	 */
	struct UWBP_PlayerStatus_C_SetAmmoResupplyEffectVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetHealth
	 */
	struct UWBP_PlayerStatus_C_OwnerSetHealth_Params
	{
	public:
		float                                                      NewValueNorm;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OldValueNorm;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetSprintStamina
	 */
	struct UWBP_PlayerStatus_C_OwnerSetSprintStamina_Params
	{
	public:
		float                                                      NewValueNorm;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OldValueNorm;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetJumpStamina
	 */
	struct UWBP_PlayerStatus_C_OwnerSetJumpStamina_Params
	{
	public:
		float                                                      NewValueNorm;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OldValueNorm;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerStartSprint
	 */
	struct UWBP_PlayerStatus_C_OwnerStartSprint_Params
	{	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerEndSprint
	 */
	struct UWBP_PlayerStatus_C_OwnerEndSprint_Params
	{	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerUpdateStamina
	 */
	struct UWBP_PlayerStatus_C_OwnerUpdateStamina_Params
	{
	public:
		float                                                      SprintValueNorm;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      JumpValueNorm;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetStanceState
	 */
	struct UWBP_PlayerStatus_C_OwnerSetStanceState_Params
	{
	public:
		EHDUICharacterStanceState                                  NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHDUICharacterStanceState                                  OldState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.Construct
	 */
	struct UWBP_PlayerStatus_C_Construct_Params
	{	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerActivatePlayerEffect
	 */
	struct UWBP_PlayerStatus_C_OwnerActivatePlayerEffect_Params
	{
	public:
		class UWidget*                                             EffectIndicatorWidget;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerDeactivatePlayerEffect
	 */
	struct UWBP_PlayerStatus_C_OwnerDeactivatePlayerEffect_Params
	{
	public:
		class UWidget*                                             EffectIndicatorWidget;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.BPOwnerDeath
	 */
	struct UWBP_PlayerStatus_C_BPOwnerDeath_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J7KV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PlayerStatus.WBP_PlayerStatus_C.ExecuteUbergraph_WBP_PlayerStatus
	 */
	struct UWBP_PlayerStatus_C_ExecuteUbergraph_WBP_PlayerStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N4VW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
