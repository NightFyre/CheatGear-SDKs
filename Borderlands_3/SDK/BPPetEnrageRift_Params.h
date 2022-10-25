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
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.OnRep_Mod3Kills
	 */
	struct ABPPetEnrageRift_C_OnRep_Mod3Kills_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod3
	 */
	struct ABPPetEnrageRift_C_RemoveMod3_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.OnCausedDeath
	 */
	struct ABPPetEnrageRift_C_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (BlueprintVisible, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod3
	 */
	struct ABPPetEnrageRift_C_TrySetupMod3_Params
	{
	public:
		class UOakActionAbility_HulkOut*                           ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod2
	 */
	struct ABPPetEnrageRift_C_RemoveMod2_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod2
	 */
	struct ABPPetEnrageRift_C_TrySetupMod2_Params
	{
	public:
		class UOakActionAbility_HulkOut*                           ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod1
	 */
	struct ABPPetEnrageRift_C_TrySetupMod1_Params
	{
	public:
		class UOakActionAbility_HulkOut*                           ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.SetupPlayerMods
	 */
	struct ABPPetEnrageRift_C_SetupPlayerMods_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.CreateActionRegisters
	 */
	struct ABPPetEnrageRift_C_CreateActionRegisters_Params
	{
	public:
		TArray<struct FGbxActionRegister>                          res;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.SetPetResourceLocks
	 */
	struct ABPPetEnrageRift_C_SetPetResourceLocks_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPostTeleport
	 */
	struct ABPPetEnrageRift_C_PreparePetPostTeleport_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.Cleanup
	 */
	struct ABPPetEnrageRift_C_Cleanup_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPreTeleport
	 */
	struct ABPPetEnrageRift_C_PreparePetPreTeleport_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.CauseDamageToPet
	 */
	struct ABPPetEnrageRift_C_CauseDamageToPet_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.TeleportPetToCurrentLocation
	 */
	struct ABPPetEnrageRift_C_TeleportPetToCurrentLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UK7Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.UserConstructionScript
	 */
	struct ABPPetEnrageRift_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.OnPetResurrected
	 */
	struct ABPPetEnrageRift_C_OnPetResurrected_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.ReceiveEndPlay
	 */
	struct ABPPetEnrageRift_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.NotifyPetTeleported
	 */
	struct ABPPetEnrageRift_C_NotifyPetTeleported_Params
	{	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.OnShutdownRequested
	 */
	struct ABPPetEnrageRift_C_OnShutdownRequested_Params
	{
	public:
		bool                                                       bForced;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPPetEnrageRift.BPPetEnrageRift_C.ExecuteUbergraph_BPPetEnrageRift
	 */
	struct ABPPetEnrageRift_C_ExecuteUbergraph_BPPetEnrageRift_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
