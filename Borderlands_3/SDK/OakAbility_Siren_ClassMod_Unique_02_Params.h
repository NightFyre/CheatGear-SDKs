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
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectQuicken
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectQuicken_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_12U2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.CalculateAbilityState
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.CheckAscendant
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_CheckAscendant_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WE94[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.FindNearbyEnemies
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_FindNearbyEnemies_Params
	{
	public:
		TArray<class AActor*>                                      Targets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       res;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WUM3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.FindNearbyPlayer
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_FindNearbyPlayer_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AB6Y[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectStillnessofMind
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectStillnessofMind_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JMHS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectBrightStar
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectBrightStar_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WWPM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectGlamour
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectGlamour_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WP4H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectSoulSap
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectSoulSap_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PEFW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectAllure
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectAllure_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.OnActivated
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.OnCausedDeath
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02
	 */
	struct UOakAbility_Siren_ClassMod_Unique_02_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
