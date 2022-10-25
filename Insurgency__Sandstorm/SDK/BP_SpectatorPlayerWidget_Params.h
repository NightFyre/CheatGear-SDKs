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
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateBackgroundColor
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdateBackgroundColor_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateKillsAssistsDeaths
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdateKillsAssistsDeaths_Params
	{
	public:
		int32_t                                                    NewKills;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewAssists;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDeaths;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateObjectives
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdateObjectives_Params
	{
	public:
		int32_t                                                    NewObjectives;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UFJP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateScore
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdateScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TW75[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePlayerStateData
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdatePlayerStateData_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.RemoveUnusedInventoryIcons
	 */
	struct UBP_SpectatorPlayerWidget_C_RemoveUnusedInventoryIcons_Params
	{
	public:
		unsigned char                                              UnknownData_TA5Z[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.AddIconForInventoryItem
	 */
	struct UBP_SpectatorPlayerWidget_C_AddIconForInventoryItem_Params
	{
	public:
		class AItemBase*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateEquipment
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdateEquipment_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.IsTargetAlive
	 */
	struct UBP_SpectatorPlayerWidget_C_IsTargetAlive_Params
	{
	public:
		bool                                                       Alive;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateClassIcon
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdateClassIcon_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.IsPlayerCurrentTarget
	 */
	struct UBP_SpectatorPlayerWidget_C_IsPlayerCurrentTarget_Params
	{
	public:
		bool                                                       CurrentViewTarget;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_946J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.GetBackgroundColor
	 */
	struct UBP_SpectatorPlayerWidget_C_GetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.SetPlayerHealth
	 */
	struct UBP_SpectatorPlayerWidget_C_SetPlayerHealth_Params
	{
	public:
		float                                                      NewHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateSoldierData
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdateSoldierData_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePawn
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdatePawn_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.SetupBindingIcon
	 */
	struct UBP_SpectatorPlayerWidget_C_SetupBindingIcon_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateInternalData
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdateInternalData_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePlayer
	 */
	struct UBP_SpectatorPlayerWidget_C_UpdatePlayer_Params
	{
	public:
		class AINSPlayerState*                                     NewPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.Construct
	 */
	struct UBP_SpectatorPlayerWidget_C_Construct_Params
	{	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.Tick
	 */
	struct UBP_SpectatorPlayerWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.ExecuteUbergraph_BP_SpectatorPlayerWidget
	 */
	struct UBP_SpectatorPlayerWidget_C_ExecuteUbergraph_BP_SpectatorPlayerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
