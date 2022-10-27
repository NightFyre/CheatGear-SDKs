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
	 * Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow
	 */
	struct UCustomDeathInterface_SetShouldUseRevivalFlow_Params
	{
	public:
		struct FSetShouldUseRevivalFlowData                        SetShouldUseRevivalFlowData;                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
	 */
	struct UCustomDeathInterface_SetShouldSkipFerryOfTheDamned_Params
	{
	public:
		struct FSetShouldSkipFerryOfTheDamnedData                  SetShouldSkipFerryOfTheDamnedData;                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
	 */
	struct UCustomDeathInterface_SetGameModeDeathPenaltyRespawnTimer_Params
	{
	public:
		struct FGameModeDeathPenaltyRespawnTimerData               GameModeDeathPenaltyRespawnTimerData;                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
	 */
	struct UCustomDeathInterface_SetCustomPlayerStart_Params
	{
	public:
		struct FSetCustomPlayerStartData                           SetCustomPlayerStartData;                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer
	 */
	struct UCustomDeathInterface_SetCustomConfigForPlayer_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I0M0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCustomDeathConfiguration                           CustomDeathConfiguration;                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.SetCrewBasedDeathPenaltyRespawnTimes
	 */
	struct UCustomDeathInterface_SetCrewBasedDeathPenaltyRespawnTimes_Params
	{
	public:
		struct FCrewBasedRespawnTimes                              CrewBasedRespawnTimes;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
	 */
	struct UCustomDeathInterface_ResetCustomConfigForPlayer_Params
	{
	public:
		struct FResetCustomConfigForPlayerData                     ResetCustomConfigForPlayerData;                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.KillPlayer
	 */
	struct UCustomDeathInterface_KillPlayer_Params
	{
	public:
		struct FKillPlayerData                                     KillPlayerData;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.KillCrew
	 */
	struct UCustomDeathInterface_KillCrew_Params
	{
	public:
		struct FKillCrewData                                       KillCrewData;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow
	 */
	struct UCustomDeathInterface_GetShouldUseRevivalFlow_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDefaultValue;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned
	 */
	struct UCustomDeathInterface_GetShouldSkipFerryOfTheDamned_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart
	 */
	struct UCustomDeathInterface_GetCustomPlayerStart_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PH1F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerStart*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn
	 */
	struct UCustomDeathInterface_ForcePlayerRespawn_Params
	{
	public:
		struct FForcePlayerRespawnData                             ForcePlayerRespawnData;                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
	 */
	struct UCustomDeathInterface_DestroyCustomPlayerStart_Params
	{
	public:
		struct FDestroyCustomPlayerStartData                       DestroyCustomPlayerStartData;                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
	 */
	struct UCustomDeathInterface_CreateNewCustomPlayerStart_Params
	{
	public:
		struct FCustomPlayerStartConfigData                        CustomPlayerStartConfigData;                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
