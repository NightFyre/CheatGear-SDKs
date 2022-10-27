#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP
	 */
	struct AAshenLordAshCloud_UpdatePostSettingsBP_Params
	{	};

	/**
	 * Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
	 */
	struct AAshenLordAshCloud_SetDissipationDensityBP_Params
	{
	public:
		float                                                      CloudDensity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
	 */
	struct AAshenLordAshCloud_OnRep_StateChanged_Params
	{	};

	/**
	 * Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
	 */
	struct AAshenLordVolcano_Multicast_FireProjectile_Params
	{
	public:
		int32_t                                                    WeightedVolcanoProjectileIndex;                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AuthoritySpawnLocation;                                  // 0x0004(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             LaunchVelocity;                                          // 0x0010(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             RotationRate;                                            // 0x001C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange
	 */
	struct AAshenLordWorldEndCloud_OnRep_CloudStateChange_Params
	{	};

	/**
	 * Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
	 */
	struct AAshenLordWorldEndCloud_AnimateCloud_Params
	{
	public:
		float                                                      AdjustedLifetime;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NaturalDisasters.Geyser.OnRep_GeyserState
	 */
	struct AGeyser_OnRep_GeyserState_Params
	{	};

	/**
	 * Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
	 */
	struct AGeyser_Multicast_TriggerExplosion_Params
	{	};

	/**
	 * Function NaturalDisasters.DisableGeyserMechanismAction.OnActionStateChanged
	 */
	struct ADisableGeyserMechanismAction_OnActionStateChanged_Params
	{
	public:
		unsigned char                                              UnknownData_NKBC[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EMechanismActionState                                      PreviousState;                                           // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMechanismActionState                                      NewState;                                                // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9A3X[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InInstigator;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NaturalDisasters.DisableGeyserMechanismAction.OnActionReset
	 */
	struct ADisableGeyserMechanismAction_OnActionReset_Params
	{	};

	/**
	 * Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
	 */
	struct AEarthquake_OnRep_EarthquakeState_Params
	{
	public:
		EEarthquakeState                                           OldEarthquakeState;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
	 */
	struct AMechanismGeyser_OnMechanismActionStateChanged_Params
	{
	public:
		unsigned char                                              UnknownData_ONXJ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EMechanismActionState                                      PreviousState;                                           // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMechanismActionState                                      NewState;                                                // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YLLM[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InInstigator;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset
	 */
	struct AMechanismGeyser_OnMechanismActionReset_Params
	{	};

	/**
	 * Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
	 */
	struct UGeyserItemSpawnComponent_OnGeyserSpawned_Params
	{
	public:
		struct FVector                                             GeyserSpawnLocation;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
	 */
	struct ALavaZone_OnRep_ActorsInZone_Params
	{
	public:
		TArray<class AActor*>                                      PreviousActors;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function NaturalDisasters.LavaZone.OnRep_Active
	 */
	struct ALavaZone_OnRep_Active_Params
	{	};

	/**
	 * Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
	 */
	struct ASuperheatedWater_OnRep_PlayersInZone_Params
	{	};

	/**
	 * Function NaturalDisasters.Volcano.OnRep_VolcanoState
	 */
	struct AVolcano_OnRep_VolcanoState_Params
	{
	public:
		struct FVolcanoStateData                                   OldVolcanoState;                                         // 0x0000(0x000C)  (ConstParm, Parm)
	};

	/**
	 * Function NaturalDisasters.Volcano.Multicast_FireProjectile
	 */
	struct AVolcano_Multicast_FireProjectile_Params
	{
	public:
		struct FVector                                             AuthoritySpawnLocation;                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WGUY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVolcanoProjectileData>                      VolcanoProjectileDataArray;                              // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
