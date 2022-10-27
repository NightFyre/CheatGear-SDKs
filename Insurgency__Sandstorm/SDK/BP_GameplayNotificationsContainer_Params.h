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
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.PruneNotifications
	 */
	struct UBP_GameplayNotificationsContainer_C_PruneNotifications_Params
	{	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddPlayerTeamKillWarningNotification
	 */
	struct UBP_GameplayNotificationsContainer_C_AddPlayerTeamKillWarningNotification_Params
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Limit;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.GetWeaponName
	 */
	struct UBP_GameplayNotificationsContainer_C_GetWeaponName_Params
	{
	public:
		class UClass*                                              CauserClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DamageType;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                LocalizedName;                                           // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddNotification
	 */
	struct UBP_GameplayNotificationsContainer_C_AddNotification_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddPlayerKillNotification
	 */
	struct UBP_GameplayNotificationsContainer_C_AddPlayerKillNotification_Params
	{
	public:
		struct FPlayerKillNotice                                   Notice;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddObjectiveDestroyedNotification
	 */
	struct UBP_GameplayNotificationsContainer_C_AddObjectiveDestroyedNotification_Params
	{
	public:
		class AObjectiveDestructible*                              Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              OldOwners;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewOwners;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MLSE[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AINSPlayerState*>                             Attackers;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.BindEvents
	 */
	struct UBP_GameplayNotificationsContainer_C_BindEvents_Params
	{	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddObjectiveCaptureNotification
	 */
	struct UBP_GameplayNotificationsContainer_C_AddObjectiveCaptureNotification_Params
	{
	public:
		class AObjectiveCapturable*                                Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              OldOwners;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewOwners;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NBWY[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AINSPlayerState*>                             Capturers;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.GetFormattedPlayerList
	 */
	struct UBP_GameplayNotificationsContainer_C_GetFormattedPlayerList_Params
	{
	public:
		TArray<class AINSPlayerState*>                             Players;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class FText                                                FormattedNames;                                          // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.Construct
	 */
	struct UBP_GameplayNotificationsContainer_C_Construct_Params
	{	};

	/**
	 * Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.ExecuteUbergraph_BP_GameplayNotificationsContainer
	 */
	struct UBP_GameplayNotificationsContainer_C_ExecuteUbergraph_BP_GameplayNotificationsContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
