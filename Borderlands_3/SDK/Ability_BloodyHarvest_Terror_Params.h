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
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ForceResetAllTerror
	 */
	struct UAbility_BloodyHarvest_Terror_C_ForceResetAllTerror_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.SetTerrorResourcePool
	 */
	struct UAbility_BloodyHarvest_Terror_C_SetTerrorResourcePool_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.GetTerrorResourcePoolValues
	 */
	struct UAbility_BloodyHarvest_Terror_C_GetTerrorResourcePoolValues_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X5ZL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Terror_Current_Value;                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror
	 */
	struct UAbility_BloodyHarvest_Terror_C_RemoveTerror_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror3_Presentation
	 */
	struct UAbility_BloodyHarvest_Terror_C_ApplyTerror3_Presentation_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror2_Presentation
	 */
	struct UAbility_BloodyHarvest_Terror_C_ApplyTerror2_Presentation_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror1_Presentation
	 */
	struct UAbility_BloodyHarvest_Terror_C_ApplyTerror1_Presentation_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror3_Presentation
	 */
	struct UAbility_BloodyHarvest_Terror_C_RemoveTerror3_Presentation_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror2_Presentation
	 */
	struct UAbility_BloodyHarvest_Terror_C_RemoveTerror2_Presentation_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror1_Presentation
	 */
	struct UAbility_BloodyHarvest_Terror_C_RemoveTerror1_Presentation_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror
	 */
	struct UAbility_BloodyHarvest_Terror_C_ApplyTerror_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.Terror
	 */
	struct UAbility_BloodyHarvest_Terror_C_Terror_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.Update Terror
	 */
	struct UAbility_BloodyHarvest_Terror_C_Update_Terror_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnDeath_Terror
	 */
	struct UAbility_BloodyHarvest_Terror_C_OnDeath_Terror_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnActivated
	 */
	struct UAbility_BloodyHarvest_Terror_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnDeactivated
	 */
	struct UAbility_BloodyHarvest_Terror_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ExecuteUbergraph_Ability_BloodyHarvest_Terror
	 */
	struct UAbility_BloodyHarvest_Terror_C_ExecuteUbergraph_Ability_BloodyHarvest_Terror_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62VH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
